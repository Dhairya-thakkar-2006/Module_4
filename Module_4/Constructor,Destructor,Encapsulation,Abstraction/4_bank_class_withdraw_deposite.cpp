#include<iostream>
using namespace std;

class Bank
{
    int acc_number,bal=500000;

    public:
        Bank()
        {
            cout<<"\n\n\tYour initial balance is :  "<<bal;
        }
        void deposite()
        {
            int amt;
            cout<<"\n\n\tEnter the amount to deposite :  ";
            cin>>amt;
            bal+=amt;
            cout<<"\n\n\t Your balance after deposite is :  "<<bal;
        }
        void withdraw()
        {
            int amt;
            cout<<"\n\n\tEnter the amount to withdraw :  ";
            cin>>amt;
            bal-=amt;
            cout<<"\n\n\t Your balance after withdraw is :  "<<bal;
        }



};
main()
{
    Bank B;
    B.deposite();
    B.withdraw();
}
