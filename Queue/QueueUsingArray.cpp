#include<iostream>
using namespace std;

class queue{
    int rear= -1;
    int front = -1;
    int queue[5];
    public:
    int isEmpty(){
        if (rear == -1 && front == -1)
        {
            return 1;
        }else
        {
            return 0;
        }
    }
    int isFull(){
        if (rear == 5 && front == 0)
        {
            return 1;
        }else
        {
            return 0;
        }
    }

    void enqueue(int input)
    {
        if(isFull())
        {
            cout<<"Queue is full \n";
        }else
        {
            if (front == -1)
            {
                front = 0;
            }
            
            rear++;
            queue[rear] = input;
        }
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty \n";
        }else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                queue[front]=0;
               front++;
            }
        }
    }
    void displayQueue()
    {
        if(isEmpty())
        {
        cout<<"Queue is empty\n";
        }
        else
        {
        for( int i=0 ; i<= rear ; i++)
        cout<<queue[i]<<" ";
        cout<<"\n";
        cout<<"===========================\n";
        }
    }
};

int main()
{
    int ch;
    int no = 0;
    queue q;
    do
    {
        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Display" << endl;
        cout << "4.enter the choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the Number" << endl;
            cin >> no;
            q.enqueue(no);
            break;
        case 2:
            q.dequeue();
            break;
        case 3: q.displayQueue();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (ch != 4);
    return 0;
}


