/*Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.*/
#include<iostream>
using namespace std;
class Area
{
	private:
		int l,w,area;
	public:
		Area()
		{
			l=5,w=4;
			
		}
		void show(){
			
		area=l*w;
		cout<<"\n Area = "<<area;
		}
};
main()
{
	Area my_obj;
	
	my_obj.show();
	
}