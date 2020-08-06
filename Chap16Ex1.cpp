//Blake Blakeslee MW
//Lab#
//Program Description

#include <iostream>
using namespace std;

double average(int arr[], int n) {
	
	int sum = 0; //Sum of all even elements (dividend)
	int b = 0; //The divisor of the sum
	bool noEvens = true;
	
	for (int i = 0; i < n; i++) {
		if (arr[i]%2 == 0){
			sum += arr[i];
			b++;
			noEvens = false;
		}
	}
	
	if(noEvens){
			throw 0;
	}
		
	return sum/b;
}

int main() {
	double averageCalc;
	int arr[] = {13,9,7,3};
	int n = 4;
	
	try {
		averageCalc = average(arr, n);
		cout << averageCalc << endl;
		cout << "Didn't fail";
	}
	catch (int e){
		cout << "Yea boi, that's not right.";
	}
	return 0;
}
