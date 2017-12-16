#include <iostream>
#include "STLconcepts.h"
using namespace std;


int main()
{
	// data for testing, should handle ANY data type
	int list1[] = { 3, 5, 8, 0, 2, 8, 7, 6 };
	double values[] = { 143, 2, 3, 55, 41, 4, 777 };
	
	// Exercise 22_01
	vector<int> intVector(list1, list1 + 8);
	cout << "The maximum value is " << (maxElement<int, vector<int> >(intVector)) << endl;
	cout << "The minimum value is " << (minElement<int, vector<int> >(intVector)) << endl;

	
	// Exercise 22_03
	cout << "The number of 8's is: " << (countElement<int, vector<int> >(intVector, 8)) << endl;

	
	// Exercise 23_10
	cout << "Initial contents, values: ";
	for (unsigned i = 0; i < 7; i++)
		cout << values[i] << " ";
	cout << endl;
	
	cout << "\n";
	reverse(values, values + 7);
	cout << "\nAfter reverse, values: ";
	for (unsigned i = 0; i < 7; i++)
		cout << values[i] << " ";
	cout << endl;
	
	vector<double> doubleVector(10);
	reverse_copy(values, values + 7, doubleVector.begin());
	cout << "\nAfter reverse_copy, vector v is: ";
	for (unsigned i = 0; i < 7; i++)
		cout << doubleVector[i] << " ";
	cout << endl;
	

	// Exercise 23_11
	replace(values, values + 7, 3, 555);
	cout << "\nAfter the replace function, values: ";
	for (unsigned i = 0; i < 7; i++)
		cout << values[i] << " ";
	cout << endl;
	
	replace_if(values, values + 7, greaterThan4, 555);
	cout << "\nAfter the replace_if function, values: ";
	for (unsigned i = 0; i < 7; i++)
		cout << values[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}
