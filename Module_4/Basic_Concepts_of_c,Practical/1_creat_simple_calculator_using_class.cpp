#include<iostream>
using namespace std;
class Cal
{
    int n1,n2;
    public:
        void Addition()
        {
            cout<<"Enter number 1: ";
            cin>>n1;
            cout<<"Enter number 2: ";
            cin>>n2;
            cout<<"The Addition is : "<< n1+n2;

        }
        void Subtraction()
        {
            cout<<"Enter number 1: ";
            cin>>n1;
            cout<<"Enter number 2: ";
            cin>>n2;
            cout<<"The subtraction is : "<< n1-n2;

        }
        void Multiplication()
        {
            cout<<"Enter number 1: ";
            cin>>n1;
            cout<<"Enter number 2: ";
            cin>>n2;
            cout<<"The multiplication is : "<< n1*n2;

        }
        void Division()
        {
            cout<<"Enter number 1: ";
            cin>>n1;
            cout<<"Enter number 2: ";
            cin>>n2;
            cout<<"The Division is : "<< n1/n2;

        }
};

main()
{
    Cal C;
    int choice;

    cout<<"Enter appropriate numbers for arithmetic operations : ";
    cout<<"\n\n\t Enter 1 for addition";
    cout<<"\n\n\t Enter 2 for subtraction";
    cout<<"\n\n\t Enter 3 for multiplication";
    cout<<"\n\n\t Enter 4 for division  : \n";
    cin>>choice;

    switch(choice)
    {
        case 1: C.Addition();
                break;
        case 2: C.Subtraction();
                break;
        case 3: C.Multiplication();
                break;
        case 4: C.Division();
                break;
        default : cout<<"Invalid Choice !!!";
    }

}
