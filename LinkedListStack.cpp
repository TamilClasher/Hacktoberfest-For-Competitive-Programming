#include<iostream>

using namespace std;

class node
{
  public:
  int data;
  node* next;
};

void print(node* n,node* tail)
{
  while(n->next!=tail)
  {
    cout<<n->data<<" ";
    n = n->next;
  }
  cout<<"\n";
}

node* pushfront(node *n,int data)
{
  if(n == NULL)
  {
    node* new_node= new node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
  }
  else
  {
    node* new_node= new node();
    new_node->data = data;
    new_node->next = n;
    return new_node;
  }
}

node* pushlast(node *n,int data)
{
  if(n == NULL)
  {
    cout<<"Nothing in the list.Try Pushing in the front\n";
    return 0;
  }
  else
  {
    node* new_node= new node();
    n->next = new_node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
  }
}

node* poplast(node* n)
{
  if(n == NULL)
  {
    cout<<"Nothing in the list.Try Pushing in the front\n";
    return 0;
  }
  else
  {
    node* temp = n->next;
    n->next = NULL;
    delete(temp);
    return n;
  }
}

int main()
{
  node* head = NULL;
  node* tail = head;
  head = pushfront(head,5);
  tail = pushlast(head,3);
  tail = pushlast(tail,8);
  tail = pushlast(tail,9);
  tail = poplast(tail);
  tail = poplast(tail);
  print(head,tail);
}
