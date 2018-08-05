#include <iostream>
#include <iomanip>

using namespace std;

class floa
{
		float x;
	public:
		floa() {}
		floa(float num)
		{x=num;}
		floa operator+(floa);
		floa operator-(floa);
		floa operator*(floa);
		floa operator/(floa);
		void display(void);

};

floa floa :: operator+(floa f)
{
	floa temp;
	temp.x = x + f.x;
	return (temp);
}
floa floa :: operator-(floa f)
{
	floa temp;
	temp.x = x - f.x;
	return (temp);
}
floa floa :: operator*(floa f)
{
	floa temp;
	temp.x = x * f.x;
	return (temp);
}
floa floa :: operator/(floa f)
{
	floa temp;
	temp.x = x / f.x;
	return (temp);
}

void floa :: display(void)
{
	cout << x << endl;
}

int main()
{
	floa f1 , f2, f3;

	f1 = floa(2.4);
	f2 = floa(4.9);
	

	cout << "F1 = " ; f1.display() ;
	cout << "F2 = " ; f2.display() ;
	
	f3 = f1 + f2;
	cout << "F1 + F2 = " ; f3.display() ;
	
	f3 = f1 - f2;
	cout << "F1 - F2 = " ; f3.display() ;
	
	f3 = f1 * f2;
	cout << "F1 * F2 = " ; f3.display() ;
	
	f3 = f1 / f2;
	cout << "F1 / F2 = " ; f3.display() ;


	return 0;
}