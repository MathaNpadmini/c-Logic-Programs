#include<iostream>
using namespace std;

class employee
{
    public:
        char empname[50];
        int amount=50000;
        int b,cb;
        int wd,cr;
        void withdraw();

};
class credit:public employee
{
    public:

    void credit1();
};
void credit::credit1()
{
    cout<<"\n"<<"Type the amount to be credited"<<"\n";
    cin>>cr;
    cb=b+cr;
    cout<<"\n"<<"The credited amount is:"<<cb<<"\n";
}
void employee::withdraw()
{

    cout<<"Enter the name of the employee"<<"\t";
    cin>>empname;
    cout<<"\n"<<"The current balance:"<<amount<<"\n";
    cout<<"\n"<<"Enter the withdrawal amount"<<"\n";
    cin>>wd;
    b=amount-wd;
    cout<<"\n"<<"The balance amount is:"<<b<<"\n";

}

main()//program start here
{
    credit g;
    g.withdraw();
    g.credit1();

}
