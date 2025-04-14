#include <iostream>
# include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
 Node * head = NULL;
void insertinLL(int val)
{
    Node * newnode=(Node*)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next=NULL;
    Node * last=head;
    if (last==NULL)
    {
        head=newnode;
        return;
    }
    else
    {
        while(last->next!=NULL)
        {
            last=last -> next;
        }
        last ->next=newnode;
        return;
    }
}
void display()
{
  Node * ptr=head;
 if(ptr==NULL)
 {
     cout<<"No elements are there in Linked List";
 }
 else
 {
      cout<<"Elements in linked list are:\n";
     while(ptr!=NULL)
     {
         cout<<ptr->data;
         cout<<"\n";
         ptr=ptr->next;
     }
 }
}
void deletedata(int todel)
{
    Node * temp=head;
    Node * prev;
    while(temp!=NULL && temp->data!=todel)
   {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"\n"<<todel<<"  not found \n";
        return;
    }
    else{
         cout<<"\n deleting   "<<todel<<"  from the linked list \n";
         prev->next=temp->next;
        free(temp);
    }
}
int main()
 {
     cout<<"Inserting 3 in th linked list \n";
     insertinLL(3);
     cout<<"Inserting 4 in th linked list \n";
     insertinLL(4);
     cout<<"Inserting 55 in th linked list \n";
     insertinLL(55);
     cout<<"Inserting 184 in th linked list \n";
     insertinLL(184);
     cout<<"Inserting -20 in th linked list \n";
     insertinLL(-20);
        cout<<"\n Currently the elements present in the linked list are:\n";
        display();
  cout<<"..............................................................\n";
   cout<<"delete 30 ";
   deletedata(30);
   cout<<"delete 55 ";
   deletedata(55);
   cout<<"delete -20";
   deletedata(-20);
   cout<<"delete 7 ";
   deletedata(7);
cout<<"..............................................................\n";
   cout<<"\n Now, the elements present in the linked list are:\n";
        display();
    return 0;
 }