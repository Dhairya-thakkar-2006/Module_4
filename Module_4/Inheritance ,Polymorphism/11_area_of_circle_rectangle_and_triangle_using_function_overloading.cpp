#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"\n\n\t Enter String :   ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<"\t"<<str;
                }
                String operator+(String x)
                {
                        String s;
                        strcat(str,x.str);
                        strcpy(s.str,str);
                        return s;
                }
};
int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();


        cout<<"\n\n\t First String is :  ";
        str1.display_string();

        cout<<"\n\n Second String is :  ";
        str2.display_string();


        str3=str1+str2;
        cout<<"\n\n Concatenated String is    :  ";
        str3.display_string();

        return 0;
}
