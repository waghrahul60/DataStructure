#include <iostream>
#define SPACE 10
using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node *createNode(int input)
{
    struct node *temp = new node();
    temp->data = input;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

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

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout << root->data << " ";
    }
}

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
    int option, val;
    do
    {
        cout << endl;
        cout << "Select Operetion do you want to perform :"
             << "Select OPTION NUMBER. Enter 0 to exit. " << endl;

        cout << "1. Insert Node" << endl;
        cout << "2. Preorder Traversal" << endl;
        cout << "3. Inorder Traversal" << endl;
        cout << "4. Postorder Traversal" << endl;
        cout << "5. 2D Print" << endl;
        cout << "6. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Insert" << endl;
            cout << "Enter Value to be inserted :";
            cin >> val;
            ptr = insertNode(ptr, val);
            break;
        case 2:
            cout << "Preorder" << endl;
            preorder(ptr);
            break;
        case 3:
            cout << "Inorder" << endl;
            inorder(ptr);
            break;
        case 4:
            cout << "Postorder" << endl;
            postorder(ptr);
            break;
        case 5:
            cout << "Print 2D" << endl;
            Print2d(ptr,5);
            break;
        case 6:
            system("cls");
            break;
        default:
            cout << "Enter Proper option number " << endl;
        }

    } while (option != 0);

    return 0;
}