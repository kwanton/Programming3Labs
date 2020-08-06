//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
using namespace std;

template <class T>
T add (int numCount, T firstNum) {
	T input;
	T sum = firstNum;
	
	for (int i = 0; i < numCount - 1; i++){
		cin >> input;
		sum += input;
	}
	
	return sum;
}

int main()
{
	int n; //intCount
	int firstInt;
	int intTotal;
	double firstDouble;
	double doubleTotal;
	
	cout << "Enter the number of ints you wish to enter: ";
	cin >> n;
	cout << "Enter: ";
	cin >> firstInt;
	intTotal = add(n, firstInt);
	cout << "integers: Total = " << intTotal << endl;
	
	cout << "Enter the number of doubles you wish to enter:";
	cin >> n;
	cout << "Enter: ";
	cin >> firstDouble;
	doubleTotal = add(n, firstDouble);
	cout << "doubles: Total = " << doubleTotal << endl;
	
	cout << endl;
	return 0;
}


