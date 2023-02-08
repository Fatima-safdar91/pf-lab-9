#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "enter array size:";
    cin >> size;

    int arr[size];
    int sum=0;
     float avg=0;
  for( int idx=0 ; idx <= size ; idx++)
  {
    cout << "enter element:";
     cin >> arr[idx];
    sum=sum+arr[idx];
    avg=sum/size;
  }
      cout << "sum is:" << sum << "," << "avg is:" << avg ;

}