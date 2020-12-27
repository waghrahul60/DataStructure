#include<iostream>

using namespace std;

struct Node
{
    int data;
     Node* next;
};

struct Node* front= NULL;
struct Node* rear= NULL;



int isEmpty()
{
    if (front == NULL && rear ==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node* createNode(int data)
{
    struct Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void enqueue(int input)
{
    // if (isFull())
    // {
    //     cout<<"Q is full";
    // }
    // else
    // {
        struct Node* newNode = createNode(input);
        if(front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear=newNode;
        }
    //}
}

void displayQueue()
{
 if (isEmpty())
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<ptr->data<<" ";
   ptr= ptr->next;
  }
 }
}


int main()
{
    cout<<"sdgrthhhhhs";
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    displayQueue();
    cout<<"sdgs";

    return 0;
}