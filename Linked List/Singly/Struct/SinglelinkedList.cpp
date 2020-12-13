#include<iostream>

using namespace std;

struct Node
{
   int data;
   struct Node* next;
};

struct Node* head;

void insertNode(int data)
{   
    if (head == NULL)
    {
        struct Node * New_node = new Node();//(struct Node*)malloc(sizeof(struct Node));
        New_node->data = data;
        New_node->next = NULL;
        head= New_node;
    }
    else
    {
        struct Node * New_node = new Node();//(struct Node*)malloc(sizeof(struct Node));
        New_node->data = data;
        New_node->next = head;
        head= New_node;
    }
    
}

void Display()
{
    struct Node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    insertNode(10);
    insertNode(20);
    insertNode(30);
    cout<<"Rahul";

    Display();
    return 0;
}