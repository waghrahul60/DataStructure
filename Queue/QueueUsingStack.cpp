#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Queue
{
    stack<int> s1,s2;

    void enQueue(int input)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(input);

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void deQueue()
    {
        if(s1.empty())
        {
            cout<<"Q is empty";
        }
        cout<<s1.top()<<" ";
        s1.pop();
        
    }
};


int main()
{
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);

    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();



    return 0;

}