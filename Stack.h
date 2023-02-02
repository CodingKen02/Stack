#pragma once
// first cut .. just a simple stack of integers


class Node
{
public:
	int data;
	Node* next;

	Node() : data(0), next(nullptr) {}
	Node(int data): data(data), next(nullptr) { }
	Node(int data, Node *next): data(data), next(next) {}
};

class Stack
{
private: 
	Node* top;
public:
	Stack() : top(nullptr) {}
	~Stack();

	void push(int data);
	bool pop(int& data);
	bool peek(int& data);
	bool isEmpty();
};

