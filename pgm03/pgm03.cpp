// 
// 
//

#include <iostream>
#include <string>
#include "pgm03.h"

using namespace std;

/* Implementation for class BookList START
 *
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



int main()
{
	return 0;
}