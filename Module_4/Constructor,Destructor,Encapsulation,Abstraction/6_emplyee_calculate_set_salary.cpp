#include<iostream>
using namespace std;

class employee
{
    int sal,emp_id,perf,inc,n_sal;
    string e_name;

public:
    void get_emp()
    {
        cout<<"\n\n\tEnter the name of the employee :  ";
        cin>>e_name;
        cout<<"\n\n\tEnter the employee id :  ";
        cin>>emp_id;
        cout<<"\n\n\tEnter the salary of the employee :  ";
        cin>>sal;
        cout<<"\n\n\tEnter the performance between 1 to 5 :  ";
        cin>>perf;
    }
    void cal_sal()
    {
        if(perf==5)
            inc=sal*20/100;
        else if(perf==4)
            inc=sal*15/100;
        else if(perf==3)
            inc=sal*10/100;
        else if(perf==2)
            inc=sal*5/100;
        else
            inc=0;

        n_sal=sal+inc;


    }
    void set_emp()
    {
        cout<<"\n\n\tName of the employee is "<<e_name;
        cout<<"\n\n\tEmployee id is "<<emp_id;
        cout<<"\n\n\tSalary of the employee is "<<sal;
        cout<<"\n\n\tPerformance of the employee is "<<perf;

        cout<<"\n\n\tIncrement of the employee is "<<inc;
        cout<<"\n\n\tSalary after increment is "<<n_sal;
    }
};

main()
{
    employee e;
    e.get_emp();
    e.cal_sal();
    e.set_emp();
}
