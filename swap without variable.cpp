#include <iostream>
using namespace std;
class swov
{
    public:
      int a,b;
      void swov1();
};
void swov::swov1()
{
    cout<<"Enter the a value:"<<"\t";
    cin>>a;
    cout<<"Enter the b value:"<<"\t";
    cin>>b;
    cout<<"The a and b value before swapping"<<"\t"<<a<<"\t"<<b<<"\n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The a and b value after swapping"<<"\t"<<a<<"\t"<<b<<"\n";
}
main()
{
    swov j;
    j.swov1();
}
