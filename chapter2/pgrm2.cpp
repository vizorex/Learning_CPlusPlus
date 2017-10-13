#include <iostream>

using namespace std;

int main()
{
	float num1, num2, sum , avg; 	//declaration of float type numbers

	cout << "Enter two numbers:" << "\n";	//prompting user for number
	cin >> num1 >> num2;			//can use cin >> num1 ; cin >> num2 ; but it kind of same

	sum = num1 + num2;
	avg = sum/2;

	cout << "Average of those two number is " << avg << "\n"; //<< first argument << second aargument <<third argumnt ;

	return 0; 
}