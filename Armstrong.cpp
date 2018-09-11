#include <iostream>
using namespace std;
class As
{
    public:
      int n,rem,s=0,t;
      void arm();
};
void As::arm()
{
    cout<<"Enter the n value:";
    cin>>n;
    t=n;
    while(n>0)
    {
        rem=n%10;
        s=s+(rem*rem*rem);
        n=n/10;
    }
    if(t==s)
    {
        cout<<"This number  is an armstrong number";
    }
    else
    {
      cout<<"This number is not an armstrong number";
    }
}
main()
{
    As j;
    j.arm();
}
