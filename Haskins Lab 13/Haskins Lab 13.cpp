// Prints a random list of the integers 0-9, sorts and reprints the list, and removes even numbers and reprints the list. 	

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool even(int a)
{
	return (a % 2) == 0;
}

int main()
{
	vector <int> data{ 0,1,2,3,4,5,6,7,8,9 };
	random_shuffle(begin(data), end(data));
	cout << "Random Shuffle:\n";
	for (auto it = begin(data); it != end(data); it++)
		cout << *it << ' ';
	cout << endl << endl;
	sort(begin(data), end(data)); 
	cout << "Sort:\n";
	for (auto i : data) 
		cout << i << ' ';
	cout << endl << endl;
	auto newEnd = remove_if(begin(data), end(data), even);
	cout << "Remove Even Numbers:\n";
	for (auto it = begin(data); it != newEnd; it++)
		cout << *it << ' ';
	cout << endl << endl;
	return 0;
}



