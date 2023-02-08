#include<iostream>
using namespace std;

main()
{
    int size;
    cout << "enter size:";
   cin >> size;
   int resistance[size];
    int sum=0;
   for(int idx=0 ; idx <size ; idx++)
   {
       cout << "enter resistence:";
       cin >> resistance[size];
      sum=sum+resistance[size];
   }

  cout << "total resistance is:" << sum;
}