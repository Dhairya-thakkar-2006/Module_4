#include<iostream>
using namespace std;

template <class T>
void swapping(T S1, T S2)
{
	T C;

	C=S1;
	S1=S2;
	S2=C;

	cout<<"\n\n\t After Swapping -------------";
	cout<<"\n\n\t First Number = "<<S1;
	cout<<"\n\n\t Second Number = "<<S2;
}

main()
{
	int S1, S2;

	cout<<"\n\n\t Enter First Number  : ";
	cin>>S1;
	cout<<"\n\n\t Enter Second Number  : ";
	cin>>S2;

	cout<<"\n\n\t Before Swapping -------------";
	cout<<"\n\n\t First Number = "<<S1;
	cout<<"\n\n\t Second Number = "<<S2;
	swapping(S1,  S2);
}



