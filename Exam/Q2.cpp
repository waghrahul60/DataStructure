#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node* createNode(int input)
{
    struct node* temp = new node();
    temp->data = input;
    temp->right = NULL;
    temp->left = NULL;
    return temp; 
}

struct node* insertNode(struct node*root,int input)
{
    if(root == NULL)
    {
        struct node* result = createNode(input);
        return result;
    }
    else if(input < root->data)
    {
        root->left = insertNode(root->left, input);
    }
    else
    {
        root->right = insertNode(root->right,input);
    }
    return root;
}

void preorder(struct node* root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int secondMinimum(struct node *root)
{
    struct node *temp= root;
    struct node *secondMin= NULL;

    if(temp->left->left == NULL)
    {
        
        return temp->data;
    }
    return secondMinimum(temp->left);
}

int CountTotalNumberNodes(struct node* root)
{
    int count = 0;
    if(root == NULL)
    return 0;

    if(root->left && root->right)
    {
        count++;
    }

    int a = CountTotalNumberNodes(root->left);
    int b = CountTotalNumberNodes(root->right);

    count = count + (a+b);
    return count;
}

int main()
{
    struct node * ptr = NULL;
    ptr = insertNode(ptr,8);
    insertNode(ptr,3);
    insertNode(ptr,10);
    insertNode(ptr,1);
    insertNode(ptr,6);
    insertNode(ptr,14);
    insertNode(ptr,4);
    insertNode(ptr,7);
    insertNode(ptr,13);


    preorder(ptr);

    
     
    int c = CountTotalNumberNodes(ptr);
    cout<<"Count : "<<c; 


    int secondMini = secondMinimum(ptr);
    cout<<"Second minimum no is : "<<secondMini;



    return 0;
}