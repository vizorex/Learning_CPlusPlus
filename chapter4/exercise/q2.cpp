#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int m, n;

	cout << "Enter the number of rows:" ;
	cin >> m ;
	cout << "Enter the number of colomn:" ;
	cin >> n;
	

	int matrix[m][n];
	
	for(int i =0; i< m; i++)
	{	
		cout << "Enter the Row #" << i+1 << endl ;

		for(int j =0; j<n ; j++)
			cin >> matrix[i][j];
	}
	cout << endl << "Matrix Entered :" << endl;
	for(int i =0; i< m ; i++)
	{
		for(int j =0;  j< n ; j++)
		{
			cout << setw(6) << matrix[i][j];
		}
		cout << endl;
	}
	
	return 0;
}

