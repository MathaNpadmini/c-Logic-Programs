#include<iostream>

using namespace std;

class palindrome
{
public:
    int a[10]={101,12,13,14,15},i,rev[10]={0},remainder,c[10];
    void pd();
    void pd1();
};
void palindrome::pd()
{
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }

    for(i=0;i<5;i++)
    {
        while (c[i]!=0)
        {
          remainder=c[i]%10;
          rev[i]=(rev[i]*10)+remainder;
          c[i]=c[i]/10;
        }
        cout<<rev[i]<<"\n";
    }

    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\n";
    }
    for (i=0;i<5;i++)
    {
        if(a[i]==rev[i])
        {
            cout<<"Palindrome"<<"\n";
        }
        else
        {
            cout<<"Not a Palindrome"<<"\n";
        }
    }

}

void palindrome::pd1()
{
    for(i=0;i<5;i++)
    {
       if(a[i]%2==0||a[i]%3==0||a[i]%5==0||a[i]%7==0)
       {
           cout<<"Not a Prime"<<"\n";
       }
       else
       {
           cout<<"Prime"<<"\n";
       }
    }
}

main()
{
    palindrome g;
    g.pd();
    g.pd1();
}
