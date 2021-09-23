/* The programm is to search an element from a 2d matrix*/

#include<iostream>
 using namespace std;

 int main()
 {
     int n1, n2, save_1, save_2;
     cout<<"input the dimensions of 2-d matrix : ";
     cin>>n1>>n2;
     int a[n1][n2],i,j;
     bool flag=false;
     int key;
     cout<<endl<<"enter "<<n1*n2<<" elements of an array : ";

     //input elements for an array....

     for(i=0;i<n1;i++)
     {
         for(j=0;j<n2;j++)
         {
         cin>>a[i][j];
         }
     }
     cout<<endl<<"enter the key element to be serached : ";
     cin>>key;

     //searching algorithm....

     for(i=0;i<n1;i++)
     {
         for(j=0;j<n2;j++)
         {
             if(a[i][j]==key)
             {
                 flag=true;
                 save_1=i;
                 save_2=j;
             }
         }
     }
         if(flag==1)
         {
             cout<<endl<<"element is present in the list at position a["<<save_1<<"]["<<save_2<<"]";
         }
         else
    
        {
            cout<<"element is not present in the list.";
        }
        return 0;
     }
         