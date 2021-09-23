#include<iostream>
using namespace std;
int fib(int);

int main()
{
    int num;
    cout<<"enter the no. of terms for a fibonacci series:";
    cin>>num;
    int res=fib(num);
    cout<<"the sum of first "<<num<<" terms of a fibonaacci series is : "<<res;
    return 0;
}

int fib(int a)
{
    int t1=0,t2=1,i;
    int nextterm;
    for(i=1;i<=a;i++)
    {
       cout<<t1<<endl;
       nextterm=t1+t2;
       t1=t2;
       t2=nextterm;
    }
    return t1;

}