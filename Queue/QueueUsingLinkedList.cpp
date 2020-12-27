#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

int isEmpty()
{
    if (front == NULL && rear == NULL)
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
    if (front == rear->next)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *createNode(int data)
{
    struct Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void enqueue(int input)
{
    struct Node *newNode = createNode(input);
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void deQueue()
{
    if (rear == NULL)
    {
        cout << "Q is empty ";
    }
    struct Node *temp = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }
    free(temp);
}

void displayQueue()
{
    if (isEmpty())
        cout << "Queue is empty\n";
    else
    {
        Node *ptr = front;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    deQueue();
    deQueue();
    deQueue();

    displayQueue();
    return 0;
}