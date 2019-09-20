// Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 
//Must declare functions before they are called.

template <class SomeType>
SomeType sum(SomeType a, SomeType b) {
	return a + b;
}
template <class SomeType>
SomeType subtract(SomeType a, SomeType b) {
	return a - b;
}


int countdown(int start);
void increment(int& x);


int main()
{
	string myString; 
	int a = 5; 
	a += 1;
	myString = "My name is chris";
    cout << "Hello World!\n";
	cout << myString << endl;
	cout << sum(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	int b = 6; 
	increment(b);
	cout << b << "This prints 7 because I passed a reference instead of a value." << endl;

	countdown(0);
	countdown(10);
}
//Recursion
int countdown(int start) {
	if (start == 0) {
		cout << "BLAST OFF!";
		return 0;
	}
	else {
		cout << "T-Minus " << start << " Seconds" << endl;
		return countdown(start-1);
	}
}

void increment(int& x) {
	x++;
}