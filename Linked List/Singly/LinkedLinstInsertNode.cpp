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

void insertAtMiddle(int input,int data)
{
    Node * ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;

     Node *temp1 = head;
     Node *temp2 = head; 
     while (temp1->data == input)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            
        }
    temp2->next = ptr;
    ptr->next = temp1;
    
    
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

   // insertAtMiddle(30,500);
    insertAtMiddle(20,500);

    insertAtEnd(80);
    insertAtEnd(90);
    //insertAtMiddle(80,200);


    display();
    return 0;
}