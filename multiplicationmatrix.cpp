#include<iostream>
using namespace std;

 int main()
 {
     int n1,n2,n3;
     cout<<"enter the dimensions of all three matrix : ";
     cin>>n1>>n2>>n3;
     int first_matrix[n1][n2];
     int second_matrix[n2][n3];
     int mul_matrix[n1][n3];
     int i,j,k;
     cout<<"enter the elements of first matrix : ";
     for(i=0;i<n1;i++)
     {
         for(j=0;j<n2;j++)
         {
         cin>>first_matrix[i][j];
         } 
     }
     cout<<"enter the elements of second matrix : ";
     for(i=0;i<n2;i++)
     {
         for(j=0;j<n3;j++)
         {
         cin>>second_matrix[i][j];
         }
     }
       
     cout<<"the fisrt matrix is : ";
     for(i=0;i<n1;i++)
     {
         for(j=0;j<n2;j++)
         {
         cout<<first_matrix[i][j]<<" ";
         }
         cout<<endl;
     }
cout<<"the second matrix is : ";
     for(i=0;i<n2;i++)
     {
         for(j=0;j<n3;j++)
         {
         cout<<second_matrix[i][j]<<" ";
         }
         cout<<endl;
     }
     for(i=0;i<n1;i++)
     {
         for(j=0;j<n3;j++)
         {
         mul_matrix[i][j]=0;
         }
     }

     cout<<"the resultant multipliaction of first and second matrix is : ";
     for(i=0;i<n1;i++)
     {
         for(j=0;j<n3;j++)
         {
             for(k=0;k<n2;k++)
             {
                 mul_matrix[i][j]= mul_matrix[i][j]+first_matrix[i][k]*second_matrix[k][j];
             }
         }
     }
     for (i = 0; i < n1; i++)
     {
         for (j = 0; j < n3; j++)
     {
         cout<<mul_matrix[i][j]<<" ";
     }
     cout<<endl;
 }
      return 0;
 }
