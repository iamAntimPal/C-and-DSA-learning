#include<iostream>
using namespace std;
struct stack{
     int data;
     struct stack *next;
};

struct stack *top=NULL;
void push(){
     if(top==NULL)
     {
          top=new(stack);
          cout<<"enter the data:";
          cin>>top->data;
          top->next=NULL;
     }
     else
     {
          top->next=new(stack);
          cout<<"enter the data:";
          cin>>top->next->data;
          top->next->next=NULL;
     }
}
void pop(){
     if(top==NULL)
     {
          cout<<"stack is empty";
     }
     else
     {
        stack *temp=top;
        top=top->next;
        delete temp;
     }
}
void show(){
     if(top==NULL)
     {
          cout<<"stack is empty";
     }
     else
     {
          stack *temp=top;
          while(temp!=NULL)
          {
               cout<<temp->data<<" ";
               temp=temp->next;
          }
     }

}
int main()
{
     int ch;
     do
     {
          cout<<"enter 1 for push"<<endl;
          cout << "enter 2 for pop" << endl;
          cout << "enter 3 for show" << endl;
          cout << "enter the choice:" << endl;
          cin>>ch;
          switch(ch)
          {
               case 1:
                    push();
                    break;
               case 2:
                    pop();
                    break;
               case 3:
                    show();
                    break;
               default:
                    cout<<"invalid choice";
                    break;
          }
     }while(ch!=4);
     return 0;

}