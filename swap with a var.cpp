#include <iostream>
using namespace std;
class swv
{
    public:
      int a,b,temp;
      void swv1();
};
void swv::swv1()
{
    cout<<"Enter the a value:"<<"\t";
    cin>>a;
    cout<<"Enter the b value:"<<"\t";
    cin>>b;
    cout<<"The a and b value before swapping"<<"\t"<<a<<"\t"<<b<<"\n";
    temp=a;
    a=b;
    b=temp;
    cout<<"The a and b value after swapping"<<"\t"<<a<<"\t"<<b<<"\n";
}
main()
{
    swv j;
    j.swv1();
}
