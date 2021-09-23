/*The integer 36 has a peculiar property: it is a perfect square, 
and is also the sum of the integers from 1 through 8. 
i.e. 1+2+3+4+5+6+7+8=36
The next such number is 1225 which is 35, and the sum of the integers from 1 through 49. 
similarly; 1+2+..............+49=1225
Find the next number that is a perfect square and also the sum of a series 1...n.*/


#include<iostream>
using namespace std;

int main()
{
    bool cond;                          //it operates the while loop
    long int i=1,res,sum=0;
    int j,save;
    int counter=0;                      
    //to count how many peculiar numbers are there 

    /*the for looop basically contains the number 
    for which we want to eavaluate its pecularity*/

    /*at first, thesqaure of a given number is calculted 
    and then the do-while loop will check that if the given
     number is containing the sum of serie sor not*/
 
    for ( j= 1; j<=100000; j++)            //input a range of peculiar numbers we want to evaluate 
    {
        save=j;    
        res=j*j;                         //The variable result holds the square of a number

       do                                //the do-while loop find the sum of series for a given square of a number 
       {
           sum=sum+i;                    //this eqn will add the numbers from 1 to till we reach the square of a number
           
           if(sum!=res && sum<res)       /*every time the valid sum is not found this condition will increment i to 1 till 
                                         the sqaure of a number and every time variable cond initialize to true to runnig the while loop
                                         until we find the sum*/   
           {
               i++;
                cond=true;
           }

           else
           if(sum>res)
           {
               //cond=false;
               break;
           }
           else
           if(sum==res) 
           {
               cout<<"the no."<<res<<" is a peculair no."<<endl;
               cout<<"it is a perfetct square of "<<j<<endl;
               cout<<"it contains the sum of series from 1 to "<<i<<endl<<endl;
               counter++;
               cond=false;                /*whenever we found the valid series the variable cond assigns a value false
                                          to end the while loop for a given number.*/  
           }
       }
       while(cond);
       i=1;                               /*again initialize the varible i and sum to starting to evaluate another series sum.*/  
       sum=0;
    }
    cout<<"only "<<counter<<" peculiar numbers are there between 1 to "<<save;
    return 0;
    
}
