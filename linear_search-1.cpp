// This program performs a linear search on a character array

// Place Your Name Here: Jason Wong

#include <iostream>
using namespace std;

int searchList(num[], int, int); // function prototype 

const int SIZE = 8;

int main()
{
	int num[SIZE] = { 3,6,-19,5,5,0,-2,99 };
	int found;
	int searchNum;

	cout << "Enter a number to search for:" << endl;
	cin >> searchNum;

	found = searchList(word, SIZE, searchNum);

	if (found == -1)
		cout << "The number " << searchNum
		     << " was not found in the list" << endl;
	else
		cout << "The number " << searchNum << " is in the " << found + 1
		     << " position of the list" << endl;

	return 0;
}

//*******************************************************************
//	searchList
//
//  task:	       This searches an array for a particular value
//  data in:	   List of values in an array, the number of
//	               elements in the array, and the value searched for
//	               in the array
//  data returned: Position in the array of the value or -1 if value
//	               not found
//
//*******************************************************************

int searchList(char List[], int numElems, int value)
{
	for (int count = 0; count <= numElems; count++)
	{
		if (List[count] == value)
			// each array entry is checked to see if it contains
			// the desired value. 
			return count;
			// if the desired value is found, the array subscript
			// count is returned to indicate the location in the array
	}

	return -1;	// if the value is not found, -1 is returned
}