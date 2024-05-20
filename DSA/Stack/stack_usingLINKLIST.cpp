#include<iostream>
using namespace std;
struct stack{
	int data;
	struct stack *n;	
};
struct stack *top=NULL;
void push(int d)
{
	if(top==NULL)
	{
		top= new struct stack;
		top->data=d;
		top->n=NULL;
	}
	else{
		struct stack *disk=new struct stack;
		disk->data=d;
		disk->n=top;
		top=disk;
	}
}
int pop()
{
	if(top==NULL)
	{
		cout<<"stack is empty you can not pop"<<endl;
	}
	else	
	{
		int data;
		struct stack *t;
		t=top;
		top=top->n;
		data= t->data;
		delete t;
		return data;	
	}
	return 0;
}
void show()
{
	struct stack *t;
	t=top;
	while(t!=NULL)
	{
		cout<<t->data<<" ";
		t=t->n;
	}
}
int main()
{
	pop();
	push(10);
	push(20);
	show();
	push(30);
	push(50);
	push(60);
	show();
	cout<<"pop "<<pop()<<endl;
	cout<<"pop "<<pop()<<endl;
	show();
}





