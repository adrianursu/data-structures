#include <iostream>

using namespace std;

int stack[20];
int top = -1;
int bottom;

bool isEmpty()
{
	if (top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push(int value)
{
	if (top == 19)
	{
		cout << "Stack is full!" << endl;
	}
	else
	{
		top++;
		stack[top] = value;
	}
}

void pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty!" << endl;
	}
	else
	{
		top--;
	}
}

void showTop()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Top element is -> " << stack[top] << endl;
	}
}

void displayStack()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		for (int i = 0; i <= top; i++)
		{
			cout << stack[i] << " ";
		}
	}
}

void count()
{
	int contor = 1;
	for (int i = 0; i <= top; i++)
	{
		contor++;
	}
}

int main()
{
	push(4);
	push(5);
	push(8);
	push(32);
	pop();
	push(3);
	push(10);
	displayStack();
	count();
	showTop();
	return 0;
}