#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int p, n;
	float r, v;

	cout << "Enter the Principal Value : " ; cin >> p ;
	cout << "Enter Interest Rate (percent per year) : "; cin >>r ;
	cout << "Duration of Interest (in years) : " ; cin >> n;
	r = r/100;
	
	v = float (p);
	while(n)
	{
		v *= (1+r);
		n--;
	}

	cout << "The Total Amount to be paid at end of given duration is : Rs. " << fixed << setprecision(2) << v << endl ; 
}


