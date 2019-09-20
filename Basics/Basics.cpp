// Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 
//Must declare functions before they are called (unless using declaration and definition seperate. As shown below.).

template <class T>
T sum(T a, T b) {
	T result = a + b;
	return result;
}
template <class T>
T subtract(T a, T b) {
	T result = a - b;
	return result;
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

	//The Type for these calls have been inferred by the compiler.
	cout << sum(1.1,2.2) << endl;
	cout << sum(1, 2) << endl; 
	cout << subtract(1.111, 2.222) << endl;
	//This works because "False" = 0 and "True" = 1!
	cout << subtract(true, true) << endl; 


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