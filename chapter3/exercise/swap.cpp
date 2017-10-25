#include <iostream>

using namespace std;
void swap_pointer(int * a , int * b);
void swap_reference(int & a , int & b);
int main()
{
	int x, y;
	cout<< "value of x : "; cin >> x;
	cout << "value of y : " ; cin >> y;

	
	cout << "Swapping using concept of pointer :: " ;
	swap_pointer(&x, &y);
	cout << x << ":" << y<<endl;

	cout << "Swapping again using concept of reference :: ";
	swap_reference(x, y);
	cout << x << ":" << y<<endl;


}

void swap_pointer(int * a, int * b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b	= tmp;
}

void swap_reference(int & a, int & b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}