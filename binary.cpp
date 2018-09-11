#include <iostream>
using namespace std;
class binary
{
public:
    int rem,temp=1,dn;
    long bn=0;
    void b1();
};
void binary::b1()
{
    cout<<"Enter the number:";
    cin>>dn;
    while(dn!=0)
    {
        rem=dn%2;
        dn=dn/2;
        bn=bn+(rem*temp);
        temp=temp*10;
    }
  cout<<bn;
}

main()
{
    binary q;
    q.b1();
}
