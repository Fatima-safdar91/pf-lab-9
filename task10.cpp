#include<iostream>
using namespace std;

main()
{
 string word;
 cout << "enter a word:";
 getline(cin , word);
   
 int idx=0 ; 
 while (word[idx] != '\0') 
    {
      idx++;
    } 

 
 cout << "length of index is:" << idx << endl;
 

 if (idx % 2 == 0) 
   {
  cout << "word is even";
  }
   else
   {
     cout << "word is odd";
   }
 
}