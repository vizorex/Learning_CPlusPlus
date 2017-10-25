#include <iostream>
#include <stdio.h>

using namespace std;
int votes[7] = {0,0,0,0,0,0};

void vote()
{	int j;
	cout << "-----------------------Election Candidate List-------------------------" << endl;
	cout << "1. Mr.A \n2. Mr.B \n3. Mr.C \n4. Mr.D \n5. Mr.E \nEnter Your Response : ";
	cin >> j;
	switch(j)
	{
		case 1 :	
				votes[j-1] += 1; break;
		case 2 :	
				votes[j-1] += 1; break;
		case 3 :	
				votes[j-1] += 1; break;
		case 4 :	
				votes[j-1] += 1; break;
		case 5 :	
				votes[j-1] += 1; break;
		default :
				votes[5] += 1 ;	break;
		
	}
	putchar('\n');
}

void view()
{
	cout << "-----------------------Vote Count-------------------------" << endl;
	cout << "1. Mr.A : " << votes[0] <<endl;
	cout << "2. Mr.B : " << votes[1] <<endl;
	cout << "3. Mr.C : " << votes[2] <<endl;
	cout << "4. Mr.D : " << votes[3] <<endl;
	cout << "5. Mr.E : " << votes[4] <<endl;
	cout << "Spoilt Ballots Count : " << votes[5] <<endl<<endl;
	
	

}

int main()
{
	cout << "Fake Election for fake Post"<<endl;
	int n=1;

	while(n)
	{	cout << "-----------------------Election Main Menu-------------------------" << endl;
		cout << "1. Vote \n2. View Result \n0. Exit \nEnter Ur Response : ";
		cin >> n;
		switch(n)
		{
			case 1 : 
			vote();
			break;

			case 2 :
			view();
			break;

		}
		putchar('\n');
	}
}