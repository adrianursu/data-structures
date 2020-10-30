#include <iostream>

using namespace std;

#define MAX 20

class Queue
{
private:
	int front;
	int rear;
	int elements[MAX];

	bool isEmpty();
	bool isFull();

public:
	Queue()
	{
		front = -1;
		rear = -1;
	};
	void dequeue();
	void enqueue(int);
	void print();
};

bool Queue::isEmpty()
{
	return (front == -1 && rear == -1);
}

bool Queue::isFull()
{
	return (rear == MAX - 1);
}

void Queue::dequeue()
{
	int deletedElement;

	if (isEmpty())
	{
		cout << "Queue is empty!" << endl;
	}
	else
	{
		front++;
	}
}

void Queue::enqueue(int value)
{
	if (isFull())
	{
		cout << "Queue is full!" << endl;
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}
		rear++;
		elements[rear] = value;
	}
}

void Queue::print()
{
	if (isEmpty())
	{
		cout << "Sorry! Queue is empty!" << endl;
	}
	else
	{
		cout << "Queue is : ";
		for (int i = front; i <= rear; i++)
		{
			cout << elements[i] << " ";
		}
	}
	cout << endl;
}