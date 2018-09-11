#include <iostream>
using namespace std;
class fib
{
    public:
      int n,fn=0,sn=1,next,c;
      void num();
};
void fib::num()
{
    cout<<"Enter the n value:";
    cin>>n;
    for(c=0;c<n;c++)
    {
        if(c<=1)
            next=c;
        else
            next=fn+sn;
            fn=sn;
            sn=next;
        cout<<next;
    }
}
main()
{
    fib j;
    j.num();
}
