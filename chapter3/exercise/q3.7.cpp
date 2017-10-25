#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;
const float acc = 0.000001; // 0.0001 % accuracy
int main()
{	
	float x;
	cout<< "Enter the value of angle in degree : ";
	cin >>x ;
	x = x*(3.14159/180.0);	//pie = 3.14159

	float sin_actual, sinx, temp, den=1;

	sin_actual = sin(x); //using library function
	sinx = x;

	int n=1;
	temp = x;
	
	do
	{
		//fact = fact*(n-1)*n;
		den = 2*n*(2*n+1);		
		temp = (-temp)*x*x/den;
		sinx = sinx + temp;

		n = n + 1;
	}while(acc <= fabs(sin_actual - sinx));		

	cout << endl << "Sin of the angle from Taylor's Expansion : " 
	<<fixed <<setprecision(10) << sinx << endl;
	cout << "Sin of the angle from Taylor's Expansion : "
	<<fixed <<setprecision(10) << sin_actual << endl;

}