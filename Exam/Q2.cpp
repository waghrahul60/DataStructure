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
    int count = 1;
    if(root == NULL)
    return 0;

    if(root->left != NULL)
    {
        count = count + CountTotalNumberNodes(root->left);
    }
    
    if(root->right != NULL)
    {
        count = count + CountTotalNumberNodes(root->right);
    }
    return count;
}

struct node* deleteNode(struct node* root,int input)
{
    if(root == NULL)
    {
        return root;
    }
    else if(input < root->data)
    {
        root->left = deleteNode(root->left,input);
    }
    else if(input > root->data)
    {
        root->right = deleteNode(root->right,input);
    }else
    {
        if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        if(root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
    /*
        struct node *current = root->left;
        while (current->left != NULL)
        {
            current = current->left;
        }

        struct node *temp = current;
        root->data = temp->data;
        root->right  = deleteNode(root->right,input); */
    }
    
    return root;
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


    cout<<"Pre Order Traversal : ";
    preorder(ptr);
    cout<<endl;
    
    int c = CountTotalNumberNodes(ptr);
    cout<<"Total Number of Nodes : "<<c<<endl; 


    int secondMini = secondMinimum(ptr);
    cout<<"Second minimum no is : "<<secondMini<<endl;

    struct node* a = deleteNode(ptr,13);

    cout<<"After Deleting Node 13 Tree PriOrder : ";
    preorder(a);
    cout<<endl;
    return 0;
}