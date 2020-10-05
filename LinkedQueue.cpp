#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* front;
struct node* rear;
void enqueue(int value){
    struct node* new_node;
    new_node= new node();
    if(rear==NULL){
        rear=new_node;
        rear->data=value;
        rear->next=NULL;
        front=rear;
    }
    else{
        rear->next=new_node;
        new_node->data=value;
        new_node->next=NULL;
        rear=new_node;
    }
}
void dequeue(){
    struct node* temp;
    temp=front;
    if(rear==NULL&&front==NULL){
        cout<<"Queue is empty, Deletion is not possible !!\n";
    }
    else if(front->next==NULL){
        cout<<"The deleted element is: \n"<<front->data;
        free(front);
        front=NULL;
        rear=NULL;
    }
    else{
        temp=temp->next;
        cout<<"The deleted element is:\n"<<front->data;
        free(front);
        front=temp;
    }
}
void display(){
    struct node* temp;
    temp=front;
    if(front==NULL&&rear==NULL){
        cout<<"Queue is empty\n";
    }
    else{
        cout<<"Elements in the queue are: ";
        while(temp!=NULL){
            cout<<"->"<<temp->data;
            temp=temp->next;
        }
        cout<<"\n";
    }
}
int main(){
    int v,choice;
    do{
        cout<<"Enter the choice:\n1.Enqueue\n2.Dequeue\n3.Dispaly\n4.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
            printf("Enter the value: ");
            cin>>v;
            enqueue(v);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            cout<<"Exit Program\n";
            break;
            default:
            cout<<"Invalid choice";
            break;
        }
    }
    while(choice!=4);
    return 0;
}

