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

void findHigest()
{
    Node* temp = head;
    int higest = temp->data;
    int secondHigest = 0;

    while (temp != NULL)
    {
       if(temp->data > higest)
       {
           secondHigest = higest;
           higest = temp->data;
       }
       if((temp->data > secondHigest) && (temp->data < higest))
       {
           secondHigest = temp->data;
       }

       temp = temp->next;
    }
    cout<<endl;
    cout<<"Higest : "<<higest;
    cout<<endl;
    cout<<"Second Higest : "<<secondHigest;
    cout<<endl;
}

int main(){
    insertAtEnd(5);
    insertAtEnd(10);
    
    display();

    findHigest();

    return 0;
}