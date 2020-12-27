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

int heightOfTree(struct node *root)
{
    struct node* temp;
    if (root == NULL)
    {
        return -1;
    }else
    {
        int leftHeight = heightOfTree(root->left);
        int rightHeight =  heightOfTree(root->right);
        if(leftHeight > rightHeight)
        {
            return(leftHeight + 1);
        }else
        {
            return(rightHeight + 1);
        }
        
    }
} 

void printGivenLevel(node* root, int level) 
{ 
    if (root == NULL) 
        return; 
    if (level == 1) 
        cout << root->data << " "; 
    else if (level > 1) 
    { 
        printGivenLevel(root->left, level-1); 
        printGivenLevel(root->right, level-1); 
    } 
} 

void printLevelOrder(struct node* root) 
{ 
    int h = heightOfTree(root); 
    int i; 
    for (i = 1; i <= h+1; i++) 
        printGivenLevel(root, i); 
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
    insertNode(ptr,55);
    insertNode(ptr,5);
    insertNode(ptr,88);
    insertNode(ptr,4);
    insertNode(ptr,9);
    insertNode(ptr,56);
    insertNode(ptr,54);
    insertNode(ptr,86);
    insertNode(ptr,89);





    Print2d(ptr,5);

    int result = 0;
    result = heightOfTree(ptr);
    cout<<"Hight of Tree is : "<<result<<endl;

    printLevelOrder(ptr);
    return 0;
}