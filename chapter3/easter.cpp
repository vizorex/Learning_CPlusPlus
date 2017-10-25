#include <iostream>

using namespace std;

int main()
{	
	// (conditional expression)? (action on true) : (action on false) ;
	int a, b;
	a= 10 ; b = 20;
	a == b? cout << "correct" : cout << "wrong"; //output is 'wrong'

	a=b=10;
	a == b? cout << "correct" : cout << "wrong"; // output is 'right'

}