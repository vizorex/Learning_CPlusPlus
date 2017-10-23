#include <iostream>

using namespace std;

class sample
{
	private:       //inaccesible to outside class or function
		int data1;
		char data2;
	public:			//accesible , can access data from these below function
		void set(int i,char c)
		{
			data1 = i;
			data2 = c;
		}
		void display()
		{
			cout << "Data1 = " << data1 << endl;
			cout << "Data2 = " << data2 << endl;

		}
};


int main()
{
	sample *s_ptr;		//pointer to class sample

	try					//every code in this is monitered
	{
		s_ptr = new sample;
	}	
	
	catch(bad_alloc ba)		//in case something happens wrong in new function ..
	{
		cout << "Bad Memory Allocation occurred!! Killing Program now!!" <<endl;
		return 1;
	}

	s_ptr-> set(45, 'I');	//*s_ptr.set(45, 'I');
	s_ptr->display();
	return 0;	
}