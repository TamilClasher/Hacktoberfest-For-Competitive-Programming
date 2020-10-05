#include <iostream>
using namespace std;
int stack[5], n=5, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<"\n";
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<"\n";
   else {
      cout<<"The popped element is "<< stack[top] <<"\n";
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<"\n";
   } else
   cout<<"Stack is empty";
}
int main() {
   int choice, val;
   cout<<"1) Push in stack"<<"\n";
   cout<<"2) Pop from stack"<<"\n";
   cout<<"3) Show stack"<<"\n";
   cout<<"4) Exit"<<"\n";
   do {
      cout<<"Enter choice: "<<"\n";
      cin>>choice;
      switch(choice) {
         case 1: {
            cout<<"Enter value to be pushed:"<<"\n";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<"\n";
            break;
         }
         default: {
            cout<<"Invalid Choice"<<"\n";
         }
      }
   }while(choice!=4);
   return 0;
}