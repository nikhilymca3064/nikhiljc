

#include<iostream>
using namespace std;

int main()
{
     int a[3][5],i,j;
     for(i=0;i<3;i++)
    {
         for(j=0;j<5;j++)
        {
         cin>>a[i][j];
        }
    }
     cout<<"the matrix is :"<<endl;
     for(i=0;i<3;i++)
    {
         for(j=0;j<5;j++)
        {
             //cout<<"the element at index a["<<i<<"]["<<j<<"] is: "<<a[i][j]<<endl;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
        return 0;

}