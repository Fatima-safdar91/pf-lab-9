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
  int product;
  int scalar;
     cout << "enter scalar:";
    cin >> scalar;
  
 for( int idx=0; idx < size  ; idx++)
  {
   product = scalar*arr[idx];
   cout << "product is:" << product << endl;
  }
  
    
}     