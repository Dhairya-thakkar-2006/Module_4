#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout << "Base class A constructor \n";
		}
};

class children: public Base
{
	public:
		children()
		{
			cout << "Class B constructor \n";
		}
};

class sample: public children
{
	public:
		sample()
		{
			cout << "Class C constructor \n";

		}
};

 main()
{
	sample s;
}
