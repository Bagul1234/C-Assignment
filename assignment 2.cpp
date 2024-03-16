/*
2.
Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.*/
#include<iostream>
using namespace std;
class student
{
	private:
		private:
		char name[100],address[100];
		int roll_no,ph_no;
	public:
		void set()
		{
			cout<<"enter the name of student and his roll no =";
			cin>>name>>roll_no;
			cout<<"\nenter the adress:";
			cin>>address;
			cout<<"\n phone no:";
			cin>>ph_no;
		}
		void show()
		{
			cout<<"\nName:"<<name<<"\nroll no:"<<roll_no;
			cout<<"\nAddress:"<<address<<"\nPhone No:"<<ph_no;
		}
};
		
main()
{
	student s1,s2;
	s1.set();
	s1.show();
	s2.set();
	s2.show();	
}