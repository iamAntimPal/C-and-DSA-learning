#include<iostream>
using namespace std;
int q[10];
int f=-1,r=-1;
int enqueue()
{
	if(f==-1  && r==-1)	
	{
		f++;
		r++;
	}
	else if(f==9)
	{
		cout<<"\nover flow \n";
		return 0;
	}
	else{
		f++;
	}
	int d;
	cout<<"enter data ";
	cin>>d;
	q[f]=d;
	return 1;
}
void show()
{
	if(f!=-1 && r!=-1)
	{
		int i;
		for(i=r;i<=f;i++)
		{
			cout<<q[i]<<" ";
		}	
	}
	else{
		cout<<"Queue empyu";
	}
}
int dequeue()
{
	if(f==-1 && r==-1)
	{
		cout<<"\nUnder flow \n";
		return 0;
	}
	else if(f==r)
	{
		f=-1;
		r=-1;
	}
	else{
		cout<<q[r];
		r++;
	}
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
				show();
				break;
			}
		}
			
		cout<<"\ndo u continue (y/n)"	;
		fflush(stdin);
		cin>>ch;
			
	}while(ch=='y');
}
