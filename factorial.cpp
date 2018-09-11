#include <iostream>
using namespace std;
class fact
{
    public:
      int n,fact=1,i;
      void fact1();
};
void fact::fact1()
{
    cout<<"Enter the n value:";
    cin>>n;
    for(i=1;i<=n;i++)
        fact=fact*i;
    cout<<"The factorial of the number is"<<fact;
}

main()
{
    fact j;
    j.fact1();
}
