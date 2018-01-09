#include <iostream>
#include <iomanip>

using namespace std;
float area(float a);
float area(float a, float b);
int main()
{
	cout << "Calculation of area for triangle .." << endl ;
	float x, y;
	cout << "Enter it's base length :"; cin >> x ; cout << "Enter it's height length :" ; cin >> y ;

	cout << "Area of Triangle : " << area(x,y) << endl ;

	cout << "Calculation of area for circle .." << endl ;
	cout << "Enter it's radius :"; cin >> x ; 
	cout << "Area of circle is :  "<< area(x) << endl ;

}

float area(float a)
{
	return (22 * a * a / 7);
}
float area(float a , float b)
{
	return (0.5 * a * b);
}
