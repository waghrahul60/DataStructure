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

//Function to delete node at the beginning of linked list
void deleteNodeBegining(){

    if(head==NULL)
    {
        cout<<"List Empty";
    }
    else
    {
        Node *ptr=head;
        head= ptr->next;
        free(ptr);
    }
}

//Function to delete node at the end of linked list
void deleteNodeAtEnd(){
    Node *ptr;
    if(head==NULL)
    {
        cout<<"List Empty";
    }
    if(head->next==NULL)
    {
        ptr=head;
        head=NULL;
        free(ptr);
    }
    else
    {
        Node *prev;
        ptr = head;
        while(ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        free(ptr);
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
    insertAtBegining(40);
    insertAtBegining(50);
    display();


    deleteNodeBegining();
    deleteNodeAtEnd();


    display();
    return 0;
}