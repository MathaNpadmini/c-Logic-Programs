#include <iostream>
using namespace std;
class str1
{
public:
    string cou[100]={"Germany", "Nepal", "India", "Pakistan", "Itaq"};
    string cap[100]={"Berlin", "Katmandu", "Delhi", "Islamabad", "Baghdad"};
    int i;
    void str();
};
void str1::str()
{
    cin>>i;
    cout<<cou[i]<<"--->"<<cap[i];


}
main()
{
    str1 b;
    b.str();
}
