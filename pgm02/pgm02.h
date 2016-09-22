// this is header file for pgm2
// it has declaration for class Part,
// it has declaration for class ArrayList,

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define ARRAY_CAPACITY 100

class Part 
{
public: 
	int partNum;
	string description;
	int quantity;
	float unitPrice;
	
	void printPart();
	
	Part(int pn, string desc, int quan, float up)
	{
		partNum = pn;
		description = desc;
		quantity = quan;
		unitPrice = up;
	}
};

// define class ArrayList
class ArrayList
{
public:
 	
	// type can be easily changed here, and just here. 
	typedef Part value_type;

	// default constructor 
	ArrayList(){count = 0;}
	
	// we don't need copy constructor or custom constructor so far
	
	// addElement() function will add an element at the end. 
	//   return true if success. 
	//   return false if Array List is full.
	bool addElement(value_type newElement);
	
	// addElement(index) function will add an element at given index.
	//   return true if success. (within capacity, index in range)
	//   return false else.
	bool addElement(int index, value_type newElement);
	
	// deleteElement() function will delete the element given by index. 
	//   return true if deleted.
	//   return false if incorrect index
	bool deleteElement(int index);
	
	// getElement() function will get element on index.
	//   pre-condition: index must be in proper range. 
	//   return the element to caller. 
	value_type getElement(int index);
	
	// setElement() function will set element on index. 
	//   pre-conditionL index must be in proper range. 
	void setElement(int index, value_type newElement);
	
	// getCount() function will return count to caller. 
	int getCount();
	
	
private:
	// two variables will be created here:
	//  1. one array to store elements, with preset capacity
	//  2. one integer to count how many elements in array. 
 	value_type array[ARRAY_CAPACITY];
 	int count;

};

