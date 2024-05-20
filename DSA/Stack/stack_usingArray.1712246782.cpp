#include<iostream>
using namespace std;

int stack[10];
int top=-1;

void push(int d)
{
	if(top==9)
	{
		cout<<"Stack over-flow";
	}
	else{
		top++;
		stack[top]=d;
	}
	
}
int pop()
{
	int d;
	if(top==-1)
	{
		cout<<"Empty stack ";
	}
	else{
		d=stack[top];
		top--;
	}
	return d;
}
void show()
{
	if(top==-1)
	{
		cout<<"Empty stack ";
	}
	else{
		int i;
		for(i=top;i>=0;i--)
		{
			cout<<stack[i]<<" ";
		}
		
	}
}
int main()
{
	int d,ch;
	char c;
	do{
		cout<<"1 push"<<endl
		<<"2 pop "<<endl
		<<"3 show "<<endl
		<<"4 isEmpty "<<endl
		<<"5 isFull "<<endl;
		
		cout<<"enter choice ";
		cin>>ch;
		switch(ch)
		{
			case 1:{
				cout<<"enter data ";
				cin>>d;
				push(d);
				break;
			}
			case 2:{
				d=pop();
				cout<<"pop item is "<<d;
				break;
			}
			case 3:{
				show();
				break;
			}
			default:{
				cout<<"invalid ";
				break;
			}
		}
		cout<<"\nDo u continue ";
		fflush(stdin);
		cin>>c;
	
	}while(c=='y');
	return 0;
}
