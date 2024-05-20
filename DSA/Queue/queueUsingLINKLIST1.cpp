#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;	
};
struct node* f=NULL;
struct node *r;

void enqueue()
{
	int d;
	cout<<"\nenter data ";
	cin>>d;
	if(f==NULL)
	{
		f=new struct node;
		f->data=d;
		f->next=NULL;
		r=f;
	}
	else{
		struct node* flag=new struct node;
		flag->data=d;
		flag->next=NULL;
		f->next=flag;
		f=flag;
	}
}
void dequeue()
{
	if(r==NULL)
	{
		f=NULL;
		cout<<"under flow ";
	}
	else
	{
		struct node* t=r;
		r=r->next;
		cout<<t->data;
		delete t;
	}
	
}

void show()
{
	
}
int main()
{
	char ch;
	int op;
	do{
		
	
		cout<<"1 enqueue "<<endl
			<<"2 dequeue"<<endl
			<<"3 show ";
		cout<<"enter option ";
		cin>>op;
		switch(op)
		{
			case 1:{
				enqueue();
				break;
			}
			case 2:{
				dequeue();
				break;
			}
			case 3:{
//				show();
				break;
			}
			default:{
				cout<<"invalid ";
				break;
			}
		}
			
		cout<<"\ndo u continue (y/n)"	;
		fflush(stdin);
		cin>>ch;
			
	}while(ch=='y');
}
