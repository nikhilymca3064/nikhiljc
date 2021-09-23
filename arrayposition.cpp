//program is to insert a element toa particular index in an array.

#include<iostream>
using namespace std;

int main()
{
    int i,size,pos,element;
    int choice;

    cout<<"enter the size of the elements : ";
    cin>>size;

    int a[size];

    cout<<endl<<"enter the array of "<<size<<" elements : ";
    for(i=0;i<size;i++)
    cin>>a[i];

    cout<<"the array elements are : "<<endl;

    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    
 cout<<endl<<"case 1: if you want to insert an element at last position of the array : press 1"<<endl;
 cout<<"case 2: if you want to insert an element at the particular position of the array : press 2"<<endl;
 cin>>choice;

switch(choice)
{
    case 1:
    cout<<" enter a element : "<<endl;
    cin>>element; 
    a[size]=element;
     cout<<"the array after inserting an element is : "<<endl;
     for (i = 0; i<size+1; i++)
     {
         cout<<a[i]<<" ";
     }
     break;

     case 2:
     cout<<"enter a position : "<<endl;
     cin>>pos;
     cout<<"enter a element : "<<endl;
     cin>>element;
    if (pos<size)
     {
         for(i=size;i>pos;i--)
         {
             a[i]=a[i-1];
         }
         a[pos]=element;
         size++;
     }
    
     else
         if(pos==size)
        cout<<"go to case 1."<<endl;

        else
     {
             cout<<"invalid position."<<endl;
     }

     cout<<"the array elements now are : "<<endl;
     for(i=0;i<size;i++)
     {
         cout<<a[i]<<" ";
     }
     break;

     default:
     cout<<"position not found . ";
     break;
}
return 0;
}