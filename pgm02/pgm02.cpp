/* This is for CS 300 pgm 01
 * Name & myWSU 
 * Last update: 09/12/2016
 */
 
#include <iostream>
#include <fstream>
#include <string>

#include "pgm02.h"

using namespace std;

bool ArrayList::addElement(ArrayList::value_type newElement)
{
	if (count < ARRAY_CAPACITY)
	{
		array[count] = newElement;
		count++;
		return true;
	}
	else 
		return false;	

}

bool ArrayList::addElement(int index, ArrayList::value_type newElement)
{
	// if index within range and capacity not reached
	// then move following elements then insert new element
	
	// to-do: implement this function in class
	return true;
}

bool ArrayList::deleteElement(int index)
{
	if (index < count)
	{
		for (int i = index; i < count - 1; i ++)
		{
			array[i] = array[i + 1];
		}
		count--;
		return true;
	}
	else 
		return false;
}

// pre-condition for getElement(): index must be in range, i.e. less than count
ArrayList::value_type ArrayList::getElement(int index)
{
	return array[index];
}

// pre-condition for setElement(): index must be in range, i.e. less than count
void ArrayList::setElement(int index, ArrayList::value_type newElement)
{
	array[index] = newElement;
}

int ArrayList::getCount()
{
	return count;
}




int main()
{	
	Part p1, p2;
	p1.partNum = 10;
	p1.description = "I love this part.";
	p1.quantity = 1010;
	p1.unitPrice = 999.99;
	
	p2.partNum = 20;
	p2.description = "I hate this part.";
	p2.quantity = 2020;
	p2.unitPrice = 111.11;
	
	ArrayList arrlist;
	
	arrlist.addElement(p1);
	arrlist.addElement(p2);
	
	
	

	// lets write a menu
	int choice = 0;
	cout<<"Welcome to Tiny Part Mgmt"<<endl;
	cout<<"********************"<<endl;
	cout<<"1. Print the part"<<endl;
	cout<<"2. Create a new part"<<endl;
	cout<<"3. Modify a part"<<endl;
	cout<<"4. Print total"<<endl;
	cout<<"5. Exit the program"<<endl;
	cout<<"Please make a choice: ";	
	cin>> choice;
	while (cin.good() && choice != 5)
	{
		switch (choice){
		case 1:
			
			break;
		case 2: 
			break;
		case 3:
			break;
		case 4: 
			break;
		default:
			cout<<"Invalid choice"<<endl;
		}
		cout<<"Please make a choice: ";	
		cin>>choice;

	}	
	
	return 0;
}



