#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str="nikhil nikhil";
    //sort(str.begin(),str.end());
    //cout<<str<<endl;
    int len=str.size();
    int a[26]={0};
    int i;
    for(i=0;i<len;i++)
    {
        a[str[i]-'a']++;
    }
for(i=0;i<len;i++)
{
if(a[str[i]-'a']!=0)
{
    cout<<str[i]<<a[str[i]-'a']<<endl;
}
a[str[i]-'a']=0;
}
return 0;
}