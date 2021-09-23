/* To find the ASCII value of any given character....*/

#include<iostream>
using namespace std;

int main()
{
    char i, save;
cout<<"enter an alphabet:";
cin>>i;
save=i;
for(i='A';i<='Z';i++)       
{
  if(save==i)
  cout<<endl<<"the ascii value of a given character "<<i<<" is :"<<(int)i<<endl;
}

for(i='a';i<='z';i++)
{
    if(save==i)
    cout<<endl<<"the ascii value of a given character "<<i<<" is : "<<(int)i<<endl;
}
return 0;
}
