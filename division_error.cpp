#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter 2 numbers:";
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<"\nDivision="<<c;
        }
        else
        {
            throw b;
        }
    }
    catch(int e)
    {
        cout<<"\nDivide by "<<e<<" error";
    }
    return 0;
}
