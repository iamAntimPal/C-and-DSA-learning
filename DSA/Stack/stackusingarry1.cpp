#include<iostream>
using namespace std;

int stack[3];
int top=-1;

void push(int d)
{
	if(top==3)
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
		return 0;		
	}
	d=stack[top];
	top--;
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
	cout<<"pop "<<pop()<<endl;
	push(1);
	cout<<"pop "<<pop();
	push(2);
	push(3);
	push(4);
	push(5);
	cout<<"pop "<<pop();
}
