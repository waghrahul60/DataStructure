#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node *next;
};

Node *head=NULL;

void insertAtEnd(int input){
    Node *ptr =  new Node();
    ptr->data = input;
    ptr->next = NULL;

    if(head == NULL)
    {
        head = ptr;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
        { 
            temp = temp->next;
        }
        temp->next = ptr;
    }
}


void display(){
    
    Node *temp = head;
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
    insertAtEnd(17);
    insertAtEnd(15);
    insertAtEnd(8);
    insertAtEnd(12);
    insertAtEnd(10);
    insertAtEnd(5);
    insertAtEnd(4);
    insertAtEnd(1);
    insertAtEnd(7);
    insertAtEnd(6);
    display();
    EvenAndOdd();
    display();
    return 0;
}