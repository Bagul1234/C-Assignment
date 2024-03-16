/*1.
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign
the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/
#include<iostream>
using namespace std;
class student
{
	private:
		char name[50];
		int roll_no;
	public:
		void set()
		{
			cout<<"enter the name of student and his roll no =";
			cin>>name>>roll_no;
		}
		void show()
		{
			cout<<"\nName:"<<name<<"\nroll no:"<<roll_no;
		
		}
};
main()
{
	student s1;
	s1.set();
	s1.show();
}