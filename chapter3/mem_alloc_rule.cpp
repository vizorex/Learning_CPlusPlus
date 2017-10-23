#include <iostream>

using namespace std;

int main()
{	
	/* poinnter-variable = new data-type(value) ;*/ /* create datatype */
	/* pointer-variable = new data-type[size]; */	/* craete datatype array */

	int *p;
	float *f;

	p = new int; *p = 25; /* equivalent to *p = new int(25); */
	f =  new float(7.8);
	int *q = new int[10]; 

	cout << *p << endl << *f << endl;

	delete p; delete f; delete []q;
	return 0;	
}