#include<iostream>
using namespace std;

class Circle
{


	public :
			int rad;
			float pi;

			void get_radious()
			{
				cout<<"\n\n\t Input Radious : ";
				cin>>rad;

				pi=3.14;
			}

			void area()
			{
				cout<<"\n\n\t Area of Circle : "<<pi*rad*rad;
			}

			void circumference()
			{
				cout<<"\n\n\t Circumference of Circle : "<<2*pi*rad;
			}
};

main()
{
	Circle C;



	C.get_radious();

	C.area();

	C.circumference();
}

