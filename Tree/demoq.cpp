#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node*createnode(int input)
{
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data=input;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct node *insertnode(struct node*root, int input)
{
    if(root==NULL)
    {
        return createnode(input);
    }
    if(input < root->data)
        {
        root->left = insertnode(root->left,input);
        }

    if(input > root->data)
        root->right = insertnode(root->right, input);
        return root;
}

void preorder(struct node*root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

    }
}
void inorder(struct node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }

}
int main()
{
    struct node *ptr=NULL;
    ptr=insertnode(ptr,6);
    insertnode(ptr,3);
    insertnode(ptr,4);
    insertnode(ptr,1);
    insertnode(ptr,7);
    insertnode(ptr,5);
    cout<<"preorder travers is :"<<endl;
    preorder(ptr);
    cout<<endl<<"Inorder travers is :"<<endl;
    inorder(ptr);
    return 0;
}
