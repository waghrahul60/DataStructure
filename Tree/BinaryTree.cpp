#include<iostream>
#define SPACE 10

using namespace std;

class TreeNode
{
    public:
     int value;
    TreeNode * left;
    TreeNode * right;

    TreeNode()
    {
        value = 0;
        left =NULL;
        right=NULL;
    }
    TreeNode(int v)
    {
        value = v;
        left =NULL;
        right=NULL;
    }
};


class BST
{
    public:
    TreeNode *root;

    BST()
    {
        root = NULL;
    }

    bool isEmpty()
    {
        if(root==NULL)
        {
            return true;
        }else
        {
            return false;
        }
    }

    void insertNode(TreeNode *newNode)
    {
        if (root==NULL)
        {
            root = newNode; 
        }else
        {
            TreeNode *temp=NULL;
            temp =root;
            while (temp != NULL)
            {
                if (newNode->value == temp->value)
                {
                    cout<<"Value Exist";
                    return;
                }else if ((newNode->value < temp->value)&&(temp->left ==NULL))
                {
                    temp->left = newNode;
                    break;
                }else if(newNode->value < temp->value)
                {
                    temp = temp->left;
                }else if ((newNode->value > temp->value)&&(temp->right ==NULL))
                {
                    temp->right = newNode;
                    break;
                }else
                {
                    temp = temp->right;
                }
            }
        }    
    }

    void preOrder(TreeNode *a)
    {
        cout<<a->value<<" ";
        preOrder(a->left);
        preOrder(a->right);
    }

    void print2D(TreeNode *r,int space)
    {
        if(r==NULL){
            return;
        }
        space = space + SPACE;
        print2D(r->right, space);
        cout<<endl;
        for (int i = SPACE; i<space; i++)
        {
            cout<<" ";
        }
        cout<<r->value<<"\n";
        print2D(r->left,space);
    }
};

int main()
{
    BST obj;
    int option,val;
    do
    {
        cout << "Select Operetion do you want to perform :"
             << "SELECT OPTION NUMBER. Enter 0 to exit. " << endl;

        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Prient BST values" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;
        //Node n1 Create in stack
        TreeNode *newNode = new TreeNode();
        
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Insert" << endl;
            
            cout << "Enter Value to be inserted :";
            cin >> val;
            newNode->value = val;
            obj.insertNode(newNode);
            break;
        case 2:
            cout << "Search" << endl;
            //code
            break;
        case 3:
            cout << "Delete" << endl;
            //code
            break;
        case 4:
            cout << "print and Traverse" << endl;
           // obj.print2D(obj.root,5);
            cout<<"==================";
            obj.preOrder(obj.root);

            break;
        case 5:
            system("cls");
            break;
        default:
            cout << "Enter Proper option number " << endl;
        }

    } while (option != 0);

    return 0;
}
