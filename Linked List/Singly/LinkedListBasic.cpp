#include<iostream>
using namespace std;

//Create Node Class
class Node
{
    public:
    int data;
    Node *next;
};

//Creting head pointer and equaating to NULL
Node *head = NULL;

//Main Method
int  main()
{
    //Creating a New Node
    Node *ptr = new Node();

    //Adding Data and Setting Next Pointer To NULL
    ptr->data=2;
    ptr->next=NULL;

    //Pointing Head TO created node
    head=ptr;
    //Print
    cout<<"Data is "<<head->data;
    return 0;
}