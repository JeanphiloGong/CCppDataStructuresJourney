// Defining Multiple Variables
//
int* p; // Legal but might be misleading

int* p1, p2; // p1 is a pointer to int; p2 is an int

int *p1, *p2; // both p1 and p2 are pointers to int

int* p1; // p1 is a pointer to int
int* p2; // p2 is a pointer to int

// Pointers to Pointers
int ival = 1024;
int *pi = &ival; // pi points to an int
int **ppi = &pe; // ppi points to a pointer to an int


cout << "The value of ival\n"
	<< "direct value: " << ival << "\n"
	<< "indirect value: " << *pi << "\n"
	<< "doubly indirect value: " << **ppi
	<< endl;

// References to Pointers
int i = 42;
int *p; // p is a pointer to int
int *&r = p // r is a reference to the pointer p

r = &i; // r refers to a pointer; assigning &i to r makes p point to i
*r = 0; // dereferencing r yidlds i, the object to which p points; changes i to 0
































