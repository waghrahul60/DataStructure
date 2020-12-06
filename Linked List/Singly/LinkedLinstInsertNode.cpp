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

//Function to insert node at the beginning of linked list
void insertAtBegining(int input){
    Node *ptr = new Node();
    ptr->data=input;
    ptr->next=head;
    head = ptr;
}

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
    insertAtBegining(10);
    insertAtBegining(20);
    insertAtBegining(30);

    insertAtEnd(80);
    insertAtEnd(90);


    display();
    return 0;
}