// Preview
const int bufSize = 512; // input buffer size

bufSize = 512;	//error: attempt to write to const object

const int i = get_size(); // ok:initialized at run time
const int j = 42; // ok: initialized at compile time
const int k; // error: k is uninitialaed const

// Initialization and const
int i = 42;
const int ci = i; // ok: the value in i is copied into ci
int j = ci; // ok: the value in ci is copied into j

//2.4.1.References to const
const int ci = 1024;

const int &r1 = ci; // ok:both reference and underlying object are const
r1 = 42; // error: r1 is a reference to const
int &r2 = ci; // error:nonconst reference to a const object

//Initialization and References to const
int i = 42;
const int &r1 = i; // we can bind a const int& to a plain int object
const int &r2 = 42; // ok:r1 is a reference to const
const int &r3 = r1 * 2; // ok: r3 is a referencr to const
int &r4 = r * 2; // error:r4 is a plain, nonconst reference

double dval = 3.14
const int &ri = dval;

const int temp = dval; // create a temporary const int from the double
const int &ri = temp; // bind ri that temporary

// A reference to const may refer to an object that is not const
int i = 42;
int &r1 = i; // r1 bound to i
const int &r2 = i; // r2 also bound to i; but cannot be used to change i
r1 = 0; // r1 is not const; i is now 0
r2 = 0; // error: r2 is a reference to const


















