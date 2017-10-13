#include <iostream>	//header file

using namespace std;

class temp
{
	float value;

public:
	void to_celsius();
	void to_farhen();
};
void temp :: to_celsius()
{
	cout<< "\nEnter the Temparature in Fahrenheit :";
	cin >> value;
	float tmp = (value-32)*100/180;
	cout<< "Celsius value of the same is " << tmp << "\n";
}

void temp :: to_farhen()
{
	cout<< "\nEnter the Temparature in Celsius :";
	cin >> value;
	float tmp = (value*180/100) + 32;
	cout<< "Fahrenheit value of the same is " << tmp << "\n";
}
int main()
{
	int n;
	cout << "I m here to help!\n\n1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius \n\nEnter Your Response : ";
	cin >> n;

	temp t1;

	switch(n)
	{
		case 1: 
		{
			t1.to_farhen();
			break;
		}

		case 2:
		{
			t1.to_celsius();
			break;
		}
	}
}
