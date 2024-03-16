/*Write a program to print the name, salary and date of joining of 10 employees in a company. Use
array of objects.
*/
#include<iostream>
using namespace std;
class Emp
{
	private:
		char name[40];
		float salary,doj;
		public:
			void get()
			{
				cout<<"\n Enter the employee name salry and Doj";
				cin>>name>>salary>>doj;
				
			}
			void show()
			{
				cout<<"\nEmployee name"<<name;
				cout<<"\nsalary"<<salary;
				cout<<"\nDate of joinig"<<doj;
			}
};
main()
{
	Emp employee[10],i;
	for(i=0;i<10;i++)
	{
		employee[i].get();
		employee[i].show();
	}
}