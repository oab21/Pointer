/*

1> Pointers to constants
	The data pointed to by the pointers is constant and cannot be changed
	The pointer itself can change and point somewhere else

	int high_score = 100;
	int low_score = 50;
	const int *ptr = &high_score;
	*ptr = 86;  // Error
	ptr  = &low_score // Ok
*/



/*
2> Constant Pointers
	The data pointed to by the pointers can be changed
	the pointer itself cannot change and point somewhere else

	int high_score = 100;
	int low_score = 50;
	 int *const ptr = &high_score;
	*ptr = 86;  // Ok
	ptr  = &low_score // Error
*/



/*
3> Constant pointers to constants
	The data pointed to by the pointers cannot be changed
	the pointer itself cannot change and point somewhere else

	int high_score = 100;
	int low_score = 50;
	const int *const ptr = &high_score;
	*ptr = 86;  // Error
	ptr  = &low_score // Error

*/