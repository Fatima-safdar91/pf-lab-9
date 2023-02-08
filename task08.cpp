#include<iostream>
using namespace std;

main()
{
   string word;
    getline(cin,word);
   for(int index=0 ; word[index] != '\0' ; index ++)
     {
        cout<<word[index] << endl;
     }

}