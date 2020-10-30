#include <iostream>

using namespace std;

#define MAX 20

class Stack
{
private:
	int top;
	int elements[MAX];

	bool isEmpty();
	bool isFull();

public:
	Stack()
	{
		top = -1;
		elements[MAX] = {};
	};
	int pop();
	void push(int);
	void print();
};

bool Stack::isEmpty()
{
	return (top == -1);
}

bool Stack::isFull()
{
	return (top == MAX - 1);
}

int Stack::pop()
{
	int deletedElement;

	if (isEmpty())
	{
		cout << "Stack is empty!" << endl;
	}
	else
	{
		deletedElement = elements[top];
		top--;
	}
	return deletedElement;
}

void Stack::push(int value)
{
	if (isFull())
	{
		cout << "Stack is full!" << endl;
	}
	else
	{
		top++;
		elements[top] = value;
	}
}

void Stack::print()
{
	if (isEmpty())
	{
		cout << "Sorry! Stack is empty!" << endl;
	}
	else
	{
		cout << "Stack is :";
		for (int i = 0; i <= top; i++)
		{
			cout << elements[i] << " ";
		}
	}
	cout << endl;
}