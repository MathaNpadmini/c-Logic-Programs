#include<iostream>
using namespace std;
class array1
{
    public:
    int n,a[100],i,n1;
    void arr2();
};
void array1::arr2()
{
    cout<<"Enter the array value";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the index  value";
    cin>>n1;
    cout<<a[n1];

}
main()
{
    array1 g;
    g.arr2();
}
