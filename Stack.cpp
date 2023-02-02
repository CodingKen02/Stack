#include "Stack.h"
Stack::~Stack()
{
	int val;
	while (pop(val));
}

void Stack::push(int data)
{
	top = new Node(data, top);
}
bool Stack::pop(int& data)
{
	Node* tmp = top;
	if (isEmpty()) return false;

	data = top->data;
	top = top->next;
	delete tmp;
	return true;
}
bool Stack::peek(int& data)
{
	if (isEmpty()) return false;
	data = top->data;
	return true;

}

bool Stack::isEmpty()
{
	return top == nullptr;
}