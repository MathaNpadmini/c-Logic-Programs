#include<iostream>
using namespace std;

class employee
{
    public:
        int a,b,c;
};
class value1:public employee
{
    public:
        void v1();
};
class value2:public employee
{
    public:
        void v2();
};
class value3:public employee
{
    public:
        void v3();
};
void value1::v1()
{
    cin>>a;
    cout<<a<<"\n";
}
void value2::v2()
{
    cin>>b;
    cout<<b<<"\n";
}
void value3::v3()
{
    cin>>c;
    cout<<c<<"\n";
}


main()//program start here
{
    value1 h;
    value2 s;
    value3 w;
    h.v1();
    s.v2();
    w.v3();



}
