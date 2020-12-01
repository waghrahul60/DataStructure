#include <iostream>
using namespace std;

class Stack1
{
	int count = 0;
	int stack[5];

public:
	int isFull()
	{
		if (count == 5)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

	int isEmpty()
	{
		if (count == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

	void push(int no)
	{
		int res = isFull();
		if (res == 1)
		{
			stack[count] = no;
			count++;
			cout << no << "inserted in stack" << endl;
		}
		else
		{
			cout << "Stack Overflow" << endl;
		}
	}

	void pop()
	{
		int res = isEmpty();
		if (res == 0)
		{
			cout << "Stack is underflow" << endl;
		}
		if (res == 1)
		{
			stack[count] = 0;
			cout << stack[count] << " pop from stack" << endl;
			count--;
		}
	}

	void display()
	{
		cout << "stack Elements Are............" << endl;
		for (int i = count; i > 0; i--)
		{
			cout << stack[i] << " " << endl;
		}
		cout << endl;
		cout << "==============================================";
		cout << endl;
	}
};

int main()
{
	int ch = 0;
	Stack1 s;
	do
	{
        int no;
		cout << "1.push" << endl;
		cout << "2.pop" << endl;
		cout << "3.Display" << endl;
		cout << "4.enter the choice" << endl;
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "Enter the Number" << endl;
			cin >> no;
			s.push(no);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.display();
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