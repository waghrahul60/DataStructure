#include <iostream>
#define SPACE 10
using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};
//Create New Node
struct node *createNode(int input)
{
    struct node *temp = new node();
    temp->data = input;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

//Insert Node into Tree
struct node *insertNode(struct node *root, int input)
{
    if (root == NULL)
    {
        return createNode(input);
    }
    if (input < root->data)
    {
        root->left = insertNode(root->left, input);
    }
    if (input > root->data)
    {
        root->right = insertNode(root->right, input);
    }
    return root;
}

struct node* searchNode(struct node *root,int input)
{
    struct node* temp;
    if (root == NULL)
    {
        return root;
    }else
    {
        temp = root;
        while(temp != NULL)
        {
            if (temp->data == input)
            {
                return temp;
            }
            else if(temp->data > input)
            {
                temp =  temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
    }
    return temp;
} 

///Print Tree In 2d View
void Print2d(struct node *r, int space)
{
    if (r == NULL)
    {
        return;
    }
    space = space + SPACE;
    Print2d(r->right, space);
    cout << endl;
    for (int i = SPACE; i < space; i++)
    {
        cout << " ";
    }
    cout << r->data << "\n";
    Print2d(r->left, space);
}

int main()
{
    struct node *ptr = NULL;
    ptr = insertNode(ptr,30);
    insertNode(ptr,18);
    insertNode(ptr,10);
    insertNode(ptr,25);
    insertNode(ptr,45);
    insertNode(ptr,65);

    Print2d(ptr,5);

    struct node *result = NULL;
    result = searchNode(ptr,350);
   
    if(result == NULL)
    {
        cout<<"Not Found !!!!!!!!";
    }
    else
    {
        cout<<"Result Found : "<<result->data;
    }
    return 0;
}