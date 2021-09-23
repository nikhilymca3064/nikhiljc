/* The program is to find out the maximum frequency of character*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str="nikhilnikhilk";
    int len=str.size();
    int a[26]={0};
    int i;
    for(i=0;i<len;i++)
    {
        a[str[i]-'a']++;
    }
    int maxf=-1;
    char ans;
for(i=0;i<len;i++)
{
if(maxf<=a[i])
{
    maxf=a[i];
    ans='a'+i;
}
}
cout<<"the character "<<ans<<" is present most times in a string "<<str<<endl<<"and the character frequency is "<<maxf;
return 0;
}