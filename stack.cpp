// implementation for the stack
 
 
#include <iostream>
#include "stack.h"

using namespace std;
 
void Stack::push(Node * newNode)
{
	ll.addFirst(newNode);
	top = ll.getHead();
}

bool Stack::isEmpty()
{
	if(top == NULL)
		return true;
	else 
		return false;
}

Node * Stack::peek()
{
	// make a copy, erase next link and return 
	// copy is made by calling copy construtor
	Node * copy = new Node(*top);	// ?? asks for reference but pointer is given
	
	return copy;
}

Node * Stack::pop()
{
	if (isEmpty())
		return NULL;
	else
	{
		Node * copy = new Node(*top);
		ll.deleteFirst();
		top = ll.getHead();
		return copy;
	}
}

int main()
{
	Stack stack;
	
	Node * nd1 = new Node(100);
	Node * nd2 = new Node(200);
	
	// test push()
	stack.push(nd1);
	stack.push(nd2);
	
	// test isEmpty()
	cout<<"Test: isEmpty(): "<< stack.isEmpty()<<endl;
	
	
	// test peek()
	cout<<"Test: peek(): "<<stack.peek()->getNumber()<<endl;
	
	
	// test pop()
	cout<<"Test: pop()"<<stack.pop()->getNumber()<<endl;
	cout<<"Test: pop()"<<stack.pop()->getNumber()<<endl;
	
	cout<<"Test: isEmpty(): "<<stack.isEmpty()<<endl;
	
	return 0;
}
