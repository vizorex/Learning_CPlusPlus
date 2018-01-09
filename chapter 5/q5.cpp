#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


class DB;
class DM
{
	private :
		int m , cm;
	public 	:
		void read();
		friend void add(DM , DB);

};
class DB
{
	private :
		int ft, in;
	public 	:
		void read();
		friend void add(DM , DB); 
};

void DM :: read()
{	int temp;
	cout << "Enter the distance in Centimetres : " ; 
	cin >> temp;
	m = floor((float)temp/100);
	cm = (temp%100);
	
}
void DB :: read()
{	int temp;
	cout << "Enter the distance in Inches : " ; 
	cin >> temp;
	ft = floor((float)temp/12);
	in = (temp%12);
	
}

void add(DM i ,DB j)
{
	float temp1, temp2;
		temp1 = (j.ft)*12*2.51;
			temp1 += (i.m)*100;

		temp2 = (j.in)*2.51;
			temp2 += (i.cm) ; 

	temp1 += temp2;

	cout << "The Summed Up distances equals to " << floor(temp1/100) << "Metres and " <<(int)temp1%100 << "cms.\n";
	 
}



int main()
{	DM x ; DB y;
	x.read();
	y.read();

	cout << "Adding the Given Distance.(1 inch = 2.51 cm)\n";
	add(x,y);



return 0;	
}