/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters.*/
#include<iostream>
using namespace std;
class Triangle
{
	private:
		int a,b,c,area,p;
	public:
	
			Triangle(){
				
				a=3,b=4,c=5;
			}
			void show(){
			
			area=a*b;
			cout<<"Area"<<area;
			p=a+b+c;
			cout<<"perimeter"<<p;
	}
};
main()
{
	Triangle t1;
	t1.show();
}