//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
using namespace std;

int main()
{
	int min = 1;
	int max = 20;
	bool weAllGood = true;
	int input;
	
	do {
		cin >> input;
		if (input < min || input > max){
			weAllGood = false;
		}
	}while (weAllGood);
	
	cout << endl;
	return 0;
}
