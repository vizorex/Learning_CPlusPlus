#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class complex
{
	float x, y;
	public:
		complex(){}
		complex(float a){x=y=a;}
		complex(float a, float b){x=a;y=b;}

		friend complex sum(complex ,complex);
		friend void show(complex);
};

complex sum(complex c1, complex c2)
{
	complex c3;
	c3.x = c1.x +c2.x;
	c3.y= c1.y + c2.y;
	return (c3);
}
void show(complex c)
{
	cout <<c.x << " + j" << c.y <<endl;

}
int main()
{
	complex a(2.7, 3.5);
	complex b(1.6);
	complex c;

	c = sum(a, b);
	cout << "A = "; show(a);
	cout << "B = "; show(b);
	cout << "C = "; show(c);

}