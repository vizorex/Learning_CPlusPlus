#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Program to raise a 'm' to a power of 'n'" << endl ;
	
	long int power(double a , int b =2 );
	long int result;

	double m; int n;
	cout << "Enter 'm' : " ; cin >> m ;
	cout << "Enter 'n' : "	; cin >> n ;

	result = power(m , n);
	cout << result << endl;
}


long int power(double a, int b)
{
	if (b==1)
		return a ;

	else return (a * power(a, b-1));
}