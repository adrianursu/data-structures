#include "Stack.h"

int main()
{
	Stack stack;
	stack.push(2);
	stack.push(3);
	stack.push(5);
	stack.pop();
	stack.push(10);
	stack.print();

	return 0;
}