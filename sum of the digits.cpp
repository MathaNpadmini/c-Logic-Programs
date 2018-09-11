#include <iostream>
using namespace std;
class sod
{
    public:
      int t,sum=0,rem;
      void dig();
};
void sod::dig()
{
    cout<<"Enter the t value:";
    cin>>t;
    while(t!=0)
    {
        rem=t%10;
        sum=sum+rem;
        t=t/10;
    }
            cout<<"The sum of the given digits is"<<sum;

}
main()
{
    sod j;
    j.dig();

}
