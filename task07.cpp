#include<iostream>
using namespace std;
main()
{
    
    int size;
    cout << "enter array size:";
    cin >> size;

    int arr[size];
    
  for( int idx=0; idx < size  ; idx++)
  {
    cout << "enter element:";
    cin >> arr[idx];
  }
  int smallest=100;
   for( int idx=0; idx < size  ; idx++)
   {
     if( arr[idx]<smallest)
     {
              smallest=arr[idx];
     }
     
   }
   cout << "smallest number is:" << smallest;
}
