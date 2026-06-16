#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;

    cout<<"Enter 1st number"<<endl;
    cin>>a;

    cout<<"Enter 2nd number"<<endl;
    cin>>b;

    cout<<"Enter operator (+,-,*,/,%)"<<endl;
    cin>>op;

    if(op=='+')
    {
        cout<<"addition = "<<a+b<<endl;
    }
    else if(op=='-')
    {
        cout<<"subtraction = "<<a-b<<endl;
    }
    else if(op=='*')
    {
        cout<<"multiplication = "<<a*b<<endl;
    }
    else if(op=='/')
    {
        cout<<"division = "<<a/b<<endl;
    }
    else if(op=='%')
    {
        cout<<"modulus = "<<a%b<<endl;
    }
    else
    {
        cout<<"Invalid Operator"<<endl;
    }

    return 0;
}
