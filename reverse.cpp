#include <iostream>
using namespace std;
class rev
{
    public:
      int n,rev=0,rem;
      void num();
};
void rev::num()
{
cout<<"Enter the value of n:";
cin>>n;
while(n!=0)
{
   rem=n%10;
   rev=rev*10+rem;
   n=n/10;
}
 cout<<"The reversed value is"<<rev<<"\n";
}
main()
{
    rev j;
    j.num();

}
