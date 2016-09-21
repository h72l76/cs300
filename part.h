/* This is the header file to hold class Part. 
 * Besides information fields for a part,
 *   class Part will be made into a node that can be made into linked list. 
 *   i.e., it will have a pointer to next Part object. 
 * 
 * Author: Huabo Lu
 *
 * Last modified: 09/20/2016
 */

#ifndef PART_H
#define PART_H


#include <string>


// Part will be Node for Linked List.
class Part
{
public: 
	int partNumber;
	std::string description;
	int quantity;
	float unitPrice;
	
	// link to next Part 	
	Part * nextPart;	
	
	// default constructor
	part(){}
	
	// custom constructor
	Part(int pn, std::string desc, int quan, float price)
	{
		partNumber = pn;
		description = desc;
		quantity = quan;
		unitPrice = price;
		nextPart = NULL;
	}

};

#endif

 