#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter desired number of ROW of the series :"; cin >> n;
	
	for(int i =1 ; i <= n; i++)
	{
		for(int j =0; j<i; j++)
		{
			cout << i ;
		}
		cout << endl;
	}
}


