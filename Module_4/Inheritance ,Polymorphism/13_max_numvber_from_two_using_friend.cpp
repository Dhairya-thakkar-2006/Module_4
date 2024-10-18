#include<iostream>
using namespace std;

class Find_Max
{
	int M1, M2;

	public:
			void get()
			{
				cout<<"\n\t Enter first number : ";
				cin>>M1;
				cout<<"\n\t Enter second number : ";
				cin>>M2;
			}
			friend void Maximum(Find_Max M);
};

void Maximum(Find_Max M)
{
    if(M.M1>M.M2)
        cout<<"\n\n\t '"<<M.M1 << "' number is Maximum.";
    else
        cout<<"\n\t '"<<M.M2 << "' number is Maximum.";
}

main()
{
	Find_Max M;

	M.get();
	Maximum(M);
	return 0;
}




