#include<iostream>
using namespace std;

class Person
{
    string name;
    int age;
    string country;

public:
    void set_person();
    void get_person();
};

void Person::set_person()
{
    cout<<"\n\n\tEnter the name of the person :  ";
    cin>>name;
    cout<<"\n\n\tEnter the age of the person :  ";
    cin>>age;
    cout<<"\n\n\tEnter the country of the person :  ";
    cin>>country;
}

void Person::get_person()
{
    cout<<"\n\n\tThe name of the person :  "<<name;
    cout<<"\n\n\tEnter the age of the person :  "<<age;
    cout<<"\n\n\tEnter the country of the person :  "<<country;
}

main()
{
    Person P;
    P.set_person();
    P.get_person();
}
