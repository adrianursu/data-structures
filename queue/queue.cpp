#include "Queue.h"

int main()
{
	Queue queue;
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.dequeue();
	queue.enqueue(4);
	queue.enqueue(5);
	queue.enqueue(6);
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();
	queue.enqueue(5);
	queue.print();
	return 0;
}