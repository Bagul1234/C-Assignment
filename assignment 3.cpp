/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.
*/
#include<iostream>
using namespace std;
class triangle
{
	private:
		int a=3,b=4,c=5,h,area,p;
	public:
		void get()
		{
			
			
			area=a*b;
			cout<<"\n Area of Triangle"<<area;
			p=a+b+c;
			cout<<"\n Perimeter of Triangle"<<p;
			
		}
	
};
main()
{
	triangle T1;
	T1.get();
}