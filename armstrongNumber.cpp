/* The program is to find armstrong number*/

#include<iostream>
using namespace std;

int main()
{
    int num, save, a, b, c, res;
    cout<<"enter a three digit number:";
    cin>>num;
    save=num;
a=num%10;
num=num/10;
b=num%10;
c=num/10;
res=((c*c*c)+(b*b*b)+(a*a*a));
if(res==save)
{
    cout<<"the number"<<" "<<save<<" "<<"is a palindrome number.";
}
else
{
    cout<<"the number"<<" "<<save<<" "<<"is not palindrome.";
}
return 0;
}   