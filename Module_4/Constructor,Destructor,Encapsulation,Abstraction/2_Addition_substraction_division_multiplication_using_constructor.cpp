#include<iostream>
using namespace std;

class Calculator
{
    int n1,n2;
    public:
        Calculator()
        {
            cout<<"\n\n\tEnter first number :  ";
            cin>>n1;
            cout<<"\n\n\tEnter second number :  ";
            cin>>n2;



        }

        void addition()
        {
            cout<<"\n\n\tAddition of two numbers is "<<n1+n2;
        }
        void subtraction()
        {
            cout<<"\n\n\tsubtraction of two numbers is "<<n1-n2;
        }
        void multiplication()
        {
            cout<<"\n\n\tmultiplication of two numbers is "<<n1*n2;
        }
        void division()
        {
            cout<<"\n\n\tdivision of two numbers is "<<n1/n2;
        }
};

main()
{
    Calculator C;
    int ch;


    cout<<"\n\n\tPress 1 for addition :  ";
    cout<<"\n\n\tPress 2 for addition :  ";
    cout<<"\n\n\tPress 3 for addition :  ";
    cout<<"\n\n\tPress 4 for addition :  ";
    cin>>ch;

    switch(ch)
    {
        case 1: C.addition();
                break;
        case 2: C.subtraction();
                break;
        case 3: C.multiplication();
                break;
        case 4: C.division();
                break;
        default : cout<<"\n\n\tInvalid choice !!!";
    }


    C.addition();
}
