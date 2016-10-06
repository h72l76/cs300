// This program is an application of linked list.
// It is a mgmt program for book list. 
// It uses BookNode as node, BookList as linked list.
// Writtern by: Huabo Lu
// Last modified date: Oct 06, 2016


#include <iostream>
#include <string>
#include "pgm03.h"

using namespace std;

/*
 * Implementation for class BookList STARTS HERE
 */
void BookList::addFirst(BookNode * book)
{
	book->setNext(head);
	head = book;
}

void BookList::addLast(BookNode * book)
{
	if (!head)
	{
		addFirst(book);
	}
	else
	{
		BookNode * temp = head;
		while(temp->getNext() != NULL)
		{
			temp = temp->getNext();
		}
		temp->setNext(book);
	}
}

void BookList::traverse()
{
	BookNode * temp = head;
	while(temp != NULL)
	{
		std::cout<<temp->getTitle()<<std::endl;
		temp = temp->getNext(); 
	}
}
bool BookList::isInTheList(std::string title)
{
	BookNode * temp = head;
	while(temp != NULL)
	{
		if (temp->getTitle() == title)
			return true;
		temp = temp->getNext(); 
	}
	return false;
}

bool BookList::deleteBook(std::string title)
{
	if(!head)
	{
		return false;
	}
	
	BookNode * prev = NULL;
	BookNode * cur = head;
	
	if (cur->getTitle() == title)
	{
		head = head->getNext();
		delete cur;
		return true;
	}
	
	while (cur != NULL && cur->getTitle() != title)
	{
		prev = cur;
		cur = cur->getNext();
	}
	
	if (cur == NULL)
		return false;
	else 
	{
		prev->setNext(cur->getNext());
		delete cur;
		return true;
	}
}

BookList::~BookList()
{
	while(head != NULL){
		string tempTitle = head->getTitle();
		deleteBook(tempTitle);
		cout<<"Book "<<tempTitel<<" has been deleted. "<<endl;
	}
}
/*
 * Implementation for class BookList ENDS HERE
 */


int main()
{
	// create the object of BookList first.
	// booklist is created statically.
	// HAS TO HAVE OBJECT to call member functions from class.
	BookList booklist;
	
	
	// Example of how to create BookNode object and then add to BookList obj.
	string tempTitle = "";
	cout<<"Please input Book Title: ";
	getline(cin, tempTitle);
	// Dynamic memory: create the BookNode dynamically by using keyword new
	BookNode * bn1 = new BookNode(tempTitle);
	BookNode * bn2 = new BookNode("Java");
	BookNode * bn3 = new BookNode("Python3");
	
	// Example of call member functions
	// Use OBJECT DOT FUNCTION, e.g. booklist.addFirst() 
	booklist.addFirst(bn2);
	booklist.addFirst(bn3);
	booklist.addLast(bn1);

	// Example of traverse. In this traverse function I will print book title. 
	booklist.traverse();
	
	// Example of deleteBook member function. 
	booklist.deleteBook("java");
	booklist.deleteBook("Python3");
	
	cout<<"After deletion: "<<endl;
	booklist.traverse();
	
	
	// Example of isInTheList member function. 
	if(booklist.isInTheList("Java"))
		cout<<"Book Java is in"<<endl;
	else
		cout<<"Book Java is not in"<<endl;
	
	// TO_DO: read through previous code in main(), then delete them
	//   and build your own for program 3. 
	return 0;
}