#include<iostream>
using namespace std;

main()
{
  string word;
  getline(cin,word);
  
  int idx=0; 
  int count=0;
  while(word[idx] != 0)
  {
    idx++;
  }
  if (word[idx]== 'a' || word[idx]== 'e' || word[idx]== 'i' || word[idx]== '0' || word[idx]=='u')
  {
          count ++;
  }
  cout << count;
}