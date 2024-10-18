#include<iostream>
using namespace std;

class rectangle
{
protected:
    int len;

public:

    int bre;
    void get_len()
    {
        cout<<"\n\n\tEnter the length of the rectangle :  ";
        cin>>len;
    }

};

class rec1 : public rectangle
{
public:


    void get_bre()
    {
        cout<<"\n\n\tEnter the breadth of the rectangle :  ";
        cin>>bre;
    }

    void display()
    {
        cout<<"\n\n\tArea of the rectangle is :  "<<len*bre;
    }
};

main()
{
    rec1 r;
    r.get_len();
    r.get_bre();
    r.display();
}
