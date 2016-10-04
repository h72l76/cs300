// comment here of program description, 
// your name and myWSU 
// last modified date: 

#ifndef world_PGM_03_H_hello
#define world_PGM_03_H_hello

#include <string>
using namespace std;

class BookNode {
private:
	std::string bookTitle;
	BookNode * next;
public:
	BookNode(){bookTitle = ""; next = NULL;}
	BookNode(string title){bookTitle = title; next = NULL;}
	std::string getTitle(){return bookTitle;}
	BookNode * getNext(){return next;}
	void setTitle(std::string newTitle) {bookTitle = newTitle;}
	void setNext(BookNode * newNext) {next = newNext;}
};

class BookList {
private:
	BookNode * head;
public: 
	BookList(){head = NULL;}
	~BookList();
	void addFirst(BookNode *);
	void addLast(BookNode *);
	void traverse();
	bool isInTheList(std::string);
	bool deleteBook(std::string);
};

#endif