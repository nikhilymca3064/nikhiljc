/*The program is to find wheather an alphabet is a vowel or consonant*/

#include<iostream>
using namespace std;

int main()
{
   char c;

   int isLowerCase, isUpperCase;
   cout<<"enter an alphabet:";
   cin>>c;
   isLowerCase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   isUpperCase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(isLowerCase||isUpperCase)
{
       cout<<"letter"<<" "<<c<<" "<<"is a vowel";
}
else
{
       cout<<"letter"<<" "<<c<<" "<<"is a consonant.";
}
   return 0;
}