#include<iostream>
using namespace std;
class Employee
{
	private:
		char name[40],adres[40];
		int yoj;
		float salary;
		public:
			void get()
			{
				cout<<"\nEnter the employee name joining year salary address";
				cin>>name>>yoj>>salary>>adres;
				
			}
			void set()
			{
				cout<<" "<<name<<" "<<yoj<<"-"<<salary<<"-"<<adres;
				
			}
		
};
main()
{
	Employee E1,E2,E3;
	E1.get();
	E1.set();
	E2.get();
	E2.set();
	E3.get();
	E3.set();
}