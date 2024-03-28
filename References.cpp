#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int num = 100;
	int& ref = num;

	cout << num << endl;
	cout << ref << endl;

	num = 200;
	cout << "\n--------------------" << endl;
	cout << num << endl;
	cout << ref << endl;

	ref = 300;
	cout << "\n--------------------" << endl;
	cout << num << endl;
	cout << ref << endl;

	cout << "\n---------------------------" << endl;
	vector<string> stooges = { "Larry", "Moe", "Curly" };

	for (auto str : stooges)    // str is a COPY of the each vector element
		str = "Funny";
	
	for (auto str : stooges)
		cout << str << " ";            // No change

	cout << "\n-------------------------" << endl;
	for (auto& str : stooges)
		str = "Funny";
	for (auto const str : stooges)   //notice we are using const , read-only
		cout << str << " ";          // now the vector elements have changed

	return 0;
}