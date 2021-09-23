/*The program is to find how many odd numbers are there between any two given numbers*/

#include<iostream>
using namespace std;

int main()
{
int n,i,counter=0;
cout<<"enter the value of n:";
cin>>n;
for(i=0;i<=n;i++)
{
  if(i%2==0)
  continue;

  else
  {
      cout<<i<<endl;
      counter++;
  }

}
  cout<<"the total number of odd numbers between 1 to "<<n<<" are : "<<counter;
return 0;    
}