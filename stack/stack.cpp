#include <iostream>

using namespace std;

#define MAX 20

int stack[MAX];
int top = -1;

bool isEmpty()
{
	return top == -1;
}

void push(int value)
{
	if (top == MAX - 1)
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

void writeCount()
{
	cout << top + 1 << endl;
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
	writeCount();
	showTop();
	return 0;
}