#include<iostream>
using namespace std;

// duck number - a positive number which has zeroes present in it

int ducknumber(int num)
{
    int d;
    while(num>0)
    {
        d=num%10;
        if(d==0)
        {
            return 1;
        }
        num=num/10;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if(ducknumber(n)==1)
    {
        cout<<"Duck Number";
    }
    else
    {
        cout<<"Not Duck Number";
    }
    return 0;
}
