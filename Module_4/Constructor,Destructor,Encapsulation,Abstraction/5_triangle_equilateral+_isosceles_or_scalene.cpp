#include<iostream>
using namespace std;

class triangle
{
    int l1,l2,l3;

public:
    void get_triangle()
    {
        cout<<"\n\n\tEnter the first side of the triangle :  ";
        cin>>l1;
        cout<<"\n\n\tEnter the second side of the triangle :  ";
        cin>>l2;
        cout<<"\n\n\tEnter the third side of the triangle :  ";
        cin>>l3;
    }

    void print_details()
    {
        if(l1==l2 && l2==l3)
            cout<<"\n\n\tThe triangle is equilateral .  ";
        else if(l1==l2 || l2==l3 || l1==l3)
            cout<<"\n\n\tThe triangle   is isoscales .  ";
         else
            cout<<"\n\n\tThe triangle is scalene .  ";
    }
};

int main()
{
    triangle t;
    t.get_triangle();
    t.print_details();
}
