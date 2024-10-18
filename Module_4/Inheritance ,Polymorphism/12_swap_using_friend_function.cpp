#include<iostream>
using namespace std;

class Swap
{
	int S1, S2;

	public :
			void get()
			{
				cout<<"\n\n\t Enter first number : ";
				cin>>S1;
				cout<<"\n\n\t Enter second number : ";
				cin>>S2;
			}

			friend void swapping(Swap);
};

void swapping(Swap S)
{
	cout<<"\n\n\t Before Swapping : ";
	cout<<"\n\n\t First Number = "<<S.S1;
	cout<<"\n\n\t Second Number = "<<S.S2;

	cout<<"\n\n\t After Swapping : ";

	S.S1 = S.S1 + S.S2;
	S.S2 = S.S1 - S.S2;
	S.S1 = S.S1 -	 S.S2;
	cout<<"\n\n\t First Number = "<<S.S1;
	cout<<"\n\n\t Second Number = "<<S.S2;
}

main()
{
	Swap S;

	S.get();
	swapping(S);
}

