#include <iostream>
#include <vector>
#include "determinePrime.h"
using namespace std;

int main()
{
	int input;
	bool isPrime;
	vector<int> numbersList;

	//ask for input and validate
	do {
		//ask for input
		cout << "Enter a number to check for prime numbers greater than 1: ";
		cin >> input;
		if (input <= 1) cout << "Please use a number greater than 1.\n";
	} while (input <= 1);

	for (int i = 2; i <= input; i++) {
		numbersList.push_back(i);
	}

	for (auto element : numbersList)
	{
		if (determinePrime()(element)) {
			cout << element << endl;
		}
	}

	cout << endl;
	return 0;
}