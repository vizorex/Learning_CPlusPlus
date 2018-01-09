#include <iostream>
#include <iomanip>

using namespace std;

int total = 0;
int token ;
class bank 
{
	private :
		char name[30];
		char type[10];
		int balance;

	public :
		int acc_no;
		void set();
		void deposit();
		void withdraw();
		void display();
		
		
};
bank b_cust[10];

void bank :: set()
{
	cout << "\nEnter Account ID : " ; cin >> acc_no ;
	cout << "Enter Beneficiary's Name (max 30 wwords) : " ; cin >> name ;
	cout << "Enter Account Type : " ; cin >> type;
	cout << "Enter Balance(INR) : " ; cin >> balance;
	cout << endl;
}

void bank :: display()
{
	cout << "____________________________________________" <<endl;
	cout << "Account ID : " << acc_no << endl;
	cout << "Beneficiary's Name : " << name << endl;
	cout << "Enter Account Type : " << type << endl;
	cout << "Enter Balance(INR) : " << balance << endl;
	cout << "____________________________________________" <<endl ;
}

void bank :: deposit()
{	
	
	display();
	int temp1;
	cout << "Deposit Amount : " ; cin >> temp1;
	balance += temp1;
	cout << "Transaction Done\n\n " << endl;

}

void bank :: withdraw()
{	
	
	display();
	int temp1;
	cout << "Withdrawn Amount : " ; cin >> temp1;
	balance -= temp1;
	cout << "Transaction Done \n\n" << endl;

}

int main()
{
	

	cout << "---------------------------------" << endl ;
	cout << " XYZ International Bank Private \n For Authorised Personal Only " << endl;
	cout << "---------------------------------" << endl << endl ;
	
	int counter,temp;
	do
	{
		cout << 	"1. Enter Beneficiary Details \n" <<
					"2. Deposit Money \n" <<
					"3. Withdraw Money \n" << 
					"4. Show Balance (Everyone) \n"  <<
					"5. Exit	\n" << 
					"Enter Your Response..... \n " ;
		
		cin >> counter ;

		switch(counter)
		{
			case 1 :
				b_cust[total].set(); total++ ; break;
			case 2 : 
				cout << "***\nEnter Beneficiary's ID :"; cin >>temp;
				for(int i =0 ; i <total ; i++)
				{
					if(b_cust[i].acc_no == temp) { b_cust[i].deposit(); break; }
				}
				break;
			case 3 :
				cout << "***\nEnter Beneficiary's ID :"; cin >>temp;
				for(int i =0 ; i <total ; i++)
				{
					if(b_cust[i].acc_no == temp) { b_cust[i].withdraw(); break; }
				}
				break;
			case 4 :
				for(int i=0; i <total; i++)
					{	
						b_cust[i].display();
					} break;
			case 5 : 
				break;
			default : 
				cout << "Wrong Response. Try Again.";
		}  

	} while(counter != 5);




	return 0;
}