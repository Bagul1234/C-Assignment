/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.*/
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int a,b;
	public:
		
		int Area(int x,int y)
		{
			a=x;
			b=y;
			return(x*y);
			
			
		}
};
main()
{
	Rectangle obj1,obj2;
	cout<<obj1.Area(4,5);
	cout<<"\n";
	cout<<obj2.Area(5,8);
}