/*Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.*/

#include<iostream>
using namespace std;
class Area
{
	private:
		int length,width,area;
	public:
		void setDim()
		{
			cout<<"Enter the sides of rectangle";
			cin>>length>>width;
			
		}
		void getArea()
		{
			area=length*width;
			cout<<"\n Area = "<<area;
		}
		
};
main()
{
	Area obj;
	obj.setDim();
	obj.getArea();
}