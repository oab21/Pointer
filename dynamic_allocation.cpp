#include <iostream>
using namespace std;
int main() {
	int* int_ptr = nullptr;  // int_ptr ở trong bộ nhớ stack vì nằm trong hàm main
	int_ptr = new int; // allocate an integer at runtime from the heap(cấp phát)
	cout << int_ptr << endl;
	cout << *int_ptr << endl;   //referencing pointer -- garbage
	*int_ptr = 100;
	cout << *int_ptr << endl;
	/*If you lose the pointer because it goes out the scope or you reassign it, then you lost
	your only way to get to that storage and you have memory leak*/
	delete int_ptr;    // de-allocate(thu hồi)


	size_t size = 0;
	double* temp_ptr = nullptr;
	cout << "How many temps:";
	cin >> size;
	temp_ptr = new double[size];  //allocate that chunk of memory, it's continously in memory and store the first temp
	cout << temp_ptr << endl;  //temp_ptr point to the first one.
	delete[] temp_ptr;


	return 0;
}