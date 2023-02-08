#include<iostream>
using namespace std;
main()
{
    bool flag=false;
    int size;
    cout << "enter array size:";
    cin >> size;

    int arr[size];
    
  for( int idx=0; idx < size  ; idx++)
  {
    cout << "enter element:";
    cin >> arr[idx];
  }

  int number;
  cout << "enter any number:";
  cin >> number;
  for( int idx=0; idx < size  ; idx++)
  {
      if( number== arr[idx]) 
      {
           flag=true;
      }
  }
  if(flag==true)
  {
    cout << "already existed";
  }
  else
  {
    cout << "does not exist";
  }

}