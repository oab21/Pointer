#include <iostream>
using namespace std;

int main() {
	int scores[] = { 100, 95, 89 };
	// adress of first element in the array;
	cout << scores << endl;

	// scores is the address of first element in the array --> derefenrencing score
	cout << *scores << endl;


	// Array subscript notation: 
	cout << scores[0] << " " << scores[1] << " " << scores[2] << endl;


	int* score_ptr = scores;  // declare a pointer to point a integer
	cout << score_ptr << endl;
	cout << *score_ptr << endl;

	// Pointer subscript notation:
	cout << score_ptr[0] << " " << score_ptr[1] << " " << score_ptr[2] << endl;


	// value score pointer has increased by 4 not by 1
	// Because we're not adding 1 to the pointer value, we're adding the size of 1 integer in the pointer
	cout << score_ptr << endl;
	cout << score_ptr + 1 << endl;
	cout << score_ptr + 2 << endl;



	// Pointer offset notation :
	cout << *score_ptr << endl;
	cout << *(score_ptr + 1) << endl;
	cout << *(score_ptr + 2) << endl;

	// Array offset notation :
	cout << *scores << endl;
	cout << *(scores + 1) << endl;
	cout << *(scores + 2) << endl;
	return 0;
}