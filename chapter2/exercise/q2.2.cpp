#include <iostream>
/*#include <cstdio>
#include <cstdlib>
#include <cstring>
*/
using namespace std;

int main()
{	
	int n1, n2;
	cout << "Enter two numbers from your brain: \n";
	cin >> n1 >> n2;
	if(n1 > n2) cout << n1 << " is  larger. Isn't it \n" ;
	else if (n1 == n2) cout << "U gave me two equal numbers. Dont  You? \n";
	else cout << n2 << " is larger. You agree, right? \n";
}
