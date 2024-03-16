/*Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. (just to make you familiar with
initialization lists)
*/
#include<iostream>
using namespace std;
class Volume
{
	private:
		int lenght,breadth,height,vlm;
	public:
			Volume(int x,int y,int z)
			{
				lenght=x;
				breadth=y;
				height=z;
			}
			 void show()
			{
				vlm=lenght*breadth*height;
				cout<<"VOLUME = "<<vlm;
			}
};
main()
{
Volume v1(8,8,9);

	cout<<v1.show();
}