/*
	Unitialized pointers
		int *ptr;  // pointing anywhere
		*ptr = 10 // Hopefully a crash
	Dangling pointers
	Return con trỏ bằng biến local
		int *ptr(int a){
			int a = 100
			return &a;
		}
	Not checking if new failed to allocate memory
	Leaking memory
*/