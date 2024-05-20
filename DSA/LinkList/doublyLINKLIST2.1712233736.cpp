#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* p;	
	struct node* n;	
};
struct node *head=NULL;
struct node *tail=NULL;
static int size;

void create()
{
	int d;
	size++;
	cout<<"enter data ";
	cin>>d;
	if(head==NULL)
	{
		head= new struct node;
		head->p=NULL;
		head->data=d;
		head->n=NULL;
		tail=head;
	}
	else{
		struct node *flag= new struct node;
		tail->n=flag;
		flag->p=tail;
		flag->n=NULL;
		flag->data=d;
		tail=flag;
	}
}

void show()
{
	if(head==NULL)
	{
		cout<<"head not found ";
	}
	else{
		struct node *t;
		t=head;
		while(t!=NULL)
		{
			cout<<t->data<<" ";
			t=t->n;
		}
	}
}

void insert()
{
	int d;
	if(head==NULL)
	{
		cout<<"head create first ";
	}
	else{
		cout<<"enter data ";
		cin>>d;
		struct node *flag= new struct node;
		flag->data=d;
		flag->n=head;
		flag->p=NULL;
		head->p=flag;
		head=flag;
	}
}


int del(int p)
{
	if(p==1)
	{
		struct node *t;
		t=head;
		head=head->n;
		head->p=NULL;
		delete t;
		size--;
		
	}
	if(p<size)
	{
		// delete at mid
		struct node *t= new struct node;
		t=head;
		int check=1;
		while(1)
		{
			if(check==p)
			{
				struct node *flag=new struct node;
				flag=t->n;
				t->n=t->n->n;
				flag->n->p=t;
				delete flag;
				cout<<"\nDelete at mid.....";
				size--;
				break;
					
			}
			check++;
			t=t->n;
		}
	}
	if(p==size)
	{
		struct node *t;
		t=tail;
		tail=tail->p;
		tail->n=NULL;
		delete t;
		size--;
				
	}
	return 0;
}

int main()
{
	int op,p;
	char ch;
	do{
		cout<<"\n1 create head "<<endl
		<<"2 insert node "<<endl
		<<"3 show "<<endl
		<<"4 insert at head "<<endl
		<<"5 Delete "<<endl;
		cout<<"enter choice ";
		cin>>op;
		switch(op)
		{
			case 1:{}
			case 2:{
				create();
				break;
			}
			case 3:{
				show();
				break;
			}
			case 4:{
				insert();
				break;
			}
			case 5:{
				cout<<"inter position";
				cin>>p;
				cout<<del(p);
				break;
			}
		}
		cout<<"do u continue ?? ";
		fflush(stdin);
		cin>>ch;	
	}while(ch=='y');
	
}
