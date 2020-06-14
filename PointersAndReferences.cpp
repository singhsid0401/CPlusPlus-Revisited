#include<iostream>
#define Log(x) std::cout << x << std::endl	

// Pointers are just integers holding memory address of some place in memory
void Pointers()
{
	void* ptr = nullptr;
	int var = 7;
	void* ptr1 = &var;  //&var denotes memory address of variable var
	// pointer types are meaningless except they tell the computer to fill specific bytes in memory depending on data type eg: int will collect 4 bytes 
	int* ptr2 = &var;
	*ptr2 = 10; // accessing data stored where pointer is pointing.
	int i = 1;
	int** ptr3 = &ptr2; // Pointer to a pointer
}

//References are used in call by reference to a function. So that the value passed changes rather than a copy of it as the case in call by value.
//References are just sugar coating and an easier way. Same could be achieved with pointers as well though.
//References cannot be unassigned or null like pointers
void References()
{
	int a = 5;
	int& ref = a;
	ref = 2;
	Log(a);
}