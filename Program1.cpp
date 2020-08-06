#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main()
{
	//vars
	set<string> words;

	//set up input file
	ifstream inputFile;
	inputFile.open("WordsList.txt");
	
	for (int i = 0; i < 9; i++) {
		string temp;
		inputFile >> temp;
		words.insert(temp);
	}
	inputFile.close();

	for (string e : words) {
		cout << e << endl;
	}

	cout << endl;
	return 0;
}