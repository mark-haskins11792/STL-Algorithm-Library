//***********************************************************************
// Name: Mark Haskins
// Date: 11/23/2018
// Lab: 13
// Description: Prints a random list of the integers 0-9, sorts and reprints the list, and removes even numbers and reprints the list. 	
//***********************************************************************


#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//use a predicate to remove the even numbers, then print the list.
bool even(int a)
{
	return (a % 2) == 0;
}

int main()
{
	vector <int> data{ 0,1,2,3,4,5,6,7,8,9 }; //Create an STL vector of 10 integers and store initial values 0 to 9 (data[0] == 0, data[1] == 1, etc.).
	random_shuffle(begin(data), end(data)); // Use the std::random_shuffle algorithm to shuffle the list.
	cout << "Random Shuffle:\n";
	for (auto it = begin(data); it != end(data); it++) //Print the list. (use an iterator in a regular for loop)
		cout << *it << ' ';
	cout << endl << endl;
	sort(begin(data), end(data)); //Use the std::sort algorithm to sort the list.
	cout << "Sort:\n";
	for (auto i : data) //Print the list again. (use a range - based for loop)
		cout << i << ' ';
	cout << endl << endl;
	auto newEnd = remove_if(begin(data), end(data), even);
	cout << "Remove Even Numbers:\n";
	for (auto it = begin(data); it != newEnd; it++)
		cout << *it << ' ';
	cout << endl << endl;
	return 0;
}



