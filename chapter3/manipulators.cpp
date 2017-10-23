#include <iostream>
#include <iomanip> //for setw manipulator
using namespace std;

int main()
{	
	cout << "Use of Manipulator" << endl
		 << "endl : Add new linee" << endl
		 << "setw(value) : Right indentation with value as length" << endl ; // endl is manipulator	

	int m = 2345, n= 434, l =11;

	cout 	<<"without setw manipulator"<< endl 
			<< "m = " << m << endl
			<< "n = " << n << endl
			<< "l = " << l << endl;

	cout	<<"with setw manipulator"<< endl 
			<< "m = " << setw(5) << m << endl   //it will be just like there is 5 box and 
			<< "n = " << setw(5) << n << endl	// box are filled from right, if numbers are more 
			<< "l = " << setw(5) <<	l << endl;	// than boxes , expect like normal

	float f = 1.87690;
	cout 	<< "Un formated value = " << f << endl
			<< "Formated value = " << fixed << setprecision(3) << f << endl ;


}