#include<iostream>
using namespace std;

class date
{
    int day,month,year;

public:
    void get_date()
    {
        cout<<"\n\n\tEnter the day between 1 to 31:  ";
        cin>>day;
        cout<<"\n\n\tEnter the month between 1 to 12:  ";
        cin>>month;
        cout<<"\n\n\tEnter the year between 2000 1to 2100:  ";
        cin>>year;
    }

    void validate()
    {
        if(year<2000 || year>2100)
            cout<<"\n\n\tYear is not valid !. It should be within 2000 and 2100 .  ";
        if(month<1 || month>12)
            cout<<"\n\n\tMonth is not valid !. It should be within 1 to 12 .  ";
        if(day<1 || day>31)
            cout<<"\n\n\tDay is not valid !. It should be within 1 to 31 .  ";
    }
    void set_date()
    {
        cout<<"\n\n\tToday's Day is :  "<<day;
        cout<<"\n\n\tCurrent month is :  "<<month;
        cout<<"\n\n\tCurrent Year is :  "<<year;
        cout<<"\n\n\tComplete date of today is :  "<<day<<"/"<<month<<"/"<<year;
    }
};

main()
{
    date d;
    d.get_date();
    d.validate();
    d.set_date();
}
