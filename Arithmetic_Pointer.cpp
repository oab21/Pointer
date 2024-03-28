/*
1>  Pointers can be used :
		Assignment expressions
		Arithmetic expressions
		Comparision expressions

	Pointer arithmetic only make sense with raw pointer


2>	(++) increments a pointer to point to the next array element
		int_ptr++;
	(--) decrements a pointer to point to the previous array element
		int_ptr--;

3>	+ and - operators
	increment pointer by n*sizeof(type)
		int_ptr += n
	decrease pointer by n*sizeof(type)
		int_ptr -= n
4>	Subtracting two pointers
	Determine the number of elements the pointers
	Both pointers must point to the same data type
		int n = int_ptr2 - int_ptr1
5> Comparing two pointers == and !=
	Determine if two pointers point two the same location
	does NOT compare the data where they point

	string S1 = {"Frank"};
	string S2  = {"Frank"};

	string *p1 = &S1;
	string *p2 = &S2;
	string *p3 = &S1;

	cout << (p1 == p2); //false
	cout << (p1 == p3); //true

*/


#include <iostream>
using namespace std;
int main() {
	int scores[] = { 100, 95, 68, -1 };  // use -1 is a sentinel value
	int* scores_ptr = scores;
	cout << scores_ptr << endl;
	while (*scores_ptr != -1) {
		cout << *scores_ptr << " ";
		scores_ptr++;
	}
	cout << "\n---------------------" << endl;
	scores_ptr = scores;

	/*
		The associativity is right to left
		*scores_pointer++  : we derefence pointer and increase pointer
		(*scores_pointer)++ : increase what pointer is pointing to

	*/
	while (*scores_ptr != -1)
		cout << *scores_ptr++ << " ";   

	cout << "\n--------------------" << endl;
	string s1 = "Frank";
	string s2 = "Frank";
	string s3 = "James";

	string* p1 = &s1;
	string* p2 = &s2;
	string* p3 = &s1;

	cout << boolalpha;
	cout << (p1 == p2) << " " << (p1 == p3) << endl;
	cout << (*p1 == *p2) << " " << (*p1 == *p3) << endl;

	p3 = &s3;
	cout << (*p1 == *p3) << endl;

	cout << "\n-----------------" << endl;
	// Kiểu cha các phần tử trong mảng cách nhau 1 byte
	char name[] = { "Frank" };        // F r a n k null_character (C-style-string)
	char* char_ptr1 = nullptr;
	char* char_ptr2 = nullptr;
	
	char_ptr1 = &name[0];  //F
	char_ptr2 = &name[3]; //n

	cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from "
		<< *char_ptr1 << endl;

	return 0;
}

