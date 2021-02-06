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

void EvenAndOdd()  
{  
    Node *end = head;  
    Node *prev = NULL;  
    Node *curr = head;  
    Node *newEnd = NULL;

    while (end->next != NULL)  
    {
        end = end->next;  
    }
     newEnd= end;  

    while (curr->data % 2 != 0 && curr != end)  
    {  
        newEnd->next = curr;  
        curr = curr->next;  
        newEnd->next->next = NULL;  
        newEnd = newEnd->next;  
    }  
     if (curr->data%2 == 0)  
    {  
        head = curr;  
        while (curr != end)  
        {  
            if ( (curr->data) % 2 == 0 )  
            {  
                prev = curr;  
                curr = curr->next;  
            }  
            else
            {  
                prev->next = curr->next;  
                curr->next = NULL;  
                newEnd->next = curr;  
                newEnd = curr;  
                curr = prev->next;  
            }  
        }  
    }  
  
   
    else prev = curr;  
  
    if (newEnd != end && (end->data) % 2 != 0)  
    {  
        prev->next = end->next;  
        end->next = NULL;  
        newEnd->next = end;  
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