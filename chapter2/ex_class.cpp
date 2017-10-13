#include <iostream>		//header file
using namespace std;	//some kind of ASCI namespace

class person 			//declaration of class person
{
	char name[20];		//class data
	int age;

public:					//class functions-public
	void getdata();
	void display();
};

void person :: getdata()
{
	cout<<"Enter Person Name: ";
	cin >> name ;
	cout << "Enter Person's Age: ";
	cin >> age ;
}

void person :: display()
{
	cout << "\nName : " << name << "\nAge : " << age  << "\n";
}
int main()
{
	person p;
	p.getdata();
	p.display();

	return 0;			//return value 0;
}