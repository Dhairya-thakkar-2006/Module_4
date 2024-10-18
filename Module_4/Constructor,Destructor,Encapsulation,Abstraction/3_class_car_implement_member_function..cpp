#include<iostream>
using namespace std;

class Car
{
    string comp_name,model;
    int year;
public:
    void get_car()
    {
        cout<<"\n\n\tEnter the company name :  ";
        cin>>comp_name;
        cout<<"\n\n\tEnter the model name :  ";
        cin>>model;
        cout<<"\n\n\tEnter the year :  ";
        cin>>year;
    }
    void set_car()
    {
        cout<<"\n\n\tThe car company name is :  "<<comp_name;
        cout<<"\n\n\tThe car model name is  :  "<<model;
        cout<<"\n\n\tYear is  :  "<<year;
    }
};

main()
{
    Car C;
    C.get_car();
    C.set_car();
}
