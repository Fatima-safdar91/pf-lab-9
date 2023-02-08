#include<iostream>
using namespace std;

main()
{

 string word;
 int count=0;
 cout << "enter a word:";
 getline(cin , word);
   
 for(int idx= 0; word[idx]!='\0' ; idx++)
 {
    count++;
   
 }
 for(int idx= count; word[idx] >= 0 ; idx--)
 {
    cout << word[idx] << endl;
}   
}