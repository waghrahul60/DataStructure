#include<iostream>
using namespace std;

//Creating Node Class | You can also create Structure
class Node{
    public:
    int data;
    Node *next;
};

//creating head pointer and equating that to NULL
Node *head=NULL;

//Function to insert node at the end of linked list
void insertAtEnd(int input){
    Node *ptr = new Node();
    ptr->data=input;
    ptr->next=NULL;

    if (head == NULL)
    {
        head = ptr;
    }else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

//Function to reverse the linked list
void reverseLinkedList(){
    
    Node *prev = NULL;
    Node *current = head;
    Node *n;
    if (head==NULL)
    {
        cout<<"Linked List is empty ";
    }
    else
    {
        while (current!=NULL)
        {
            n=current->next;
            current->next=prev;
            prev=current;
            current=n;
        }
        head=prev;
    }
    
}

//Function to display linked list(Traverse Linked List)
void display(){
    
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"========================";
    cout<<endl;
    
}

int main(){
    
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);
    insertAtEnd(60);

    display();
    reverseLinkedList();
    display();

    return 0;
}