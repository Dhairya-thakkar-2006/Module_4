#include<iostream>
using namespace std;

class Rec
{
    int len,wid;

public:
    void get_params();
    void get_peri();
    void get_area();

};
void Rec::get_params()
    {
        cout<<"\n\n\t Enter length";
        cin>>len;
        cout<<"\n\n\t Enter width";
        cin>>wid;


    }
void Rec::get_peri()
{
    cout<<"\n\n\t The perimiter of the rectangle is "<< 2*(len+wid);
}

void Rec::get_area()
    {
        cout<<"\n\n\t The area of the rectangle is "<< len*wid;

    }
main()
{
    Rec R;
    R.get_params();
    R.get_peri();
    R.get_area();
}
