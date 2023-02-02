#include "Stack.h"
#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main()
{
	Stack s;
	int val;

	s.push(1);
	s.push(2);
	s.push(3);

	if (s.peek(val)) { cout << "Top = " << val << endl; }

	if (s.pop(val)) { cout << "Removed " << val << endl; }



}