#include<iostream>
using namespace std;

class cricketer
{
    string name;
public:
    int match;

    void get_detail()
    {
        cout<<"\n\n\tEnter the name of cricketer : ";
        cin>>name;
        cout<<"\n\n\tEnter the total matches : ";
        cin>>match;
    }
    void put_detail()
    {
        cout<<"\n\n\tThe name of cricketer is : "<<name;
        cout<<"\n\n\tTotal matches is :  "<<match;
    }
};

class batsman : public  cricketer
{
    int tot_run,best;
    float avg_run;

public:
    void get_batsman()
    {
        cout<<"\n\n\tEnter the total runs of the batsman :  ";
        cin>>tot_run;

        cout<<"\n\n\tEnter best performance of the batsman : ";
        cin>>best;
    }
    void put_batsman()
    {
        cout<<"\n\n\tTotal runs of the batsman :  "<<tot_run;
        cout<<"\n\n\t Average runs of the batsman : "<<tot_run/match;

        cout<<"\n\n\tEnter best performance of the batsman : "<<best;
    }
};

main()
{
    batsman b;

    b.get_detail();
    b.get_batsman();
    b.put_detail();
    b.put_batsman();

}
