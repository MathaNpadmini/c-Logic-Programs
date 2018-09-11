#include<iostream>

using namespace std;

class assignment1
{
public:
     int arr[8]={17,20,24,29,16,87,19,52},i, small=arr[0],large=arr[0],odd=1,even=0;
     void largest();
     void smallest();
     void odd1();
     void even1();
};
void assignment1::largest()
{
    for (i = 0; i < 8; i++)
    {
        {
		if (large < arr[i])
			large = arr[i];
	    }

    }
    cout<<large<<"\n";
}
void assignment1::smallest()
{


        for (i = 0; i < 8; i++)
        {
            {
		if (small > arr[i])
			small = arr[i];
            }

        }
        cout<<small<<"\n";

}
void assignment1::odd1()
{
    for(i=0;i<8;i++)
    {
        {
        if(arr[i]%2!=0)
            odd=odd*arr[i];
        }
    }
    cout<<odd<<"\n";
}
void assignment1::even1()
{
    for(i=0;i<8;i++)
    {
        {
        if(arr[i]%2==0)
            even=even+arr[i];
        }
    }
     cout<<even<<"\n";

}
main()
{
  assignment1 g;
  g.largest();
  g.smallest();
  g.odd1();
  g.even1();
}
