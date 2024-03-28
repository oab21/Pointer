/*
	Functions can also return pointers
		type *function()
	Should return pointers to
		Memory dynamically allocated in the function
		To data that was passed in
	Never return a pointer to a local function variable		
*/

#include <iostream>
using namespace std;


int* create_array(size_t size, int init_value) {
	int* new_storage = nullptr;
	new_storage = new int[size];   // if we lose pointer, we've got memory leak
	for (int i = 0; i < size; ++i)
		*(new_storage + i) = init_value;
	return new_storage;
}

void display(const int* const array, size_t size) {
	for (int i = 0; i < size; ++i)
		cout << *(array + i) << " ";
	cout << endl;
}
int main() {
	int* my_array = nullptr;
	size_t size;
	int init_value{};
	cout << "\nHow many integers would you like to allocate?";
	cin >> size;
	cout << "What value would you like them initialized to?";
	cin >> init_value;
	my_array = create_array(size, init_value);
	display(my_array, size);
	delete[] my_array;
	 
	return 0;
}