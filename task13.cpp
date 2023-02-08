#include<iostream>
using namespace std;

main()
{
  string name;
  cout <<"Enter a name:";
  getline(cin,name);
  char a;
  cout << "Enter a letter:";
   cin >> a;
   int count=0;
   
   for(int idx=0 ; word[idx]!='\0' ; idx++)
   {
        count++;
        if(word[idx]=='a')
        {
            cout << "true";
        }
        else
        {
            cout << "false";
        }
   }

}