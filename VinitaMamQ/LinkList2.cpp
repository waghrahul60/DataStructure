#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void addElement(Node **head,int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

Node* intersection(Node *a, Node *b){
    Node *temp = NULL;
    while(a != NULL && b!= NULL)
    {
        if(a->data == b->data)
        {
            addElement(&temp,a->data);
            temp=temp->next;
            a = a->next;
            b = b->next;
        }else if(a-> data < b->data)
            a = a->next;
        else
            b = b->next;
    }
    return temp;
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<" ";
        node = node->next;
    }
}

int main()
{
    Node *list1 = NULL;
    Node *list2 =NULL;
    Node *abc =NULL;


    addElement(&list1,6);
    addElement(&list1,5);
    addElement(&list1,4);
    addElement(&list1,3);
    addElement(&list1,2);
    addElement(&list1,1);


    addElement(&list2,8);
    addElement(&list2,6);
    addElement(&list2,4);
    addElement(&list2,2);

    abc = intersection(list1, list2);
    printList(abc);
}