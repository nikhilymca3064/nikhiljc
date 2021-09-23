/*The law requires that food product manufacturers place expiration dates on their products, 
but there is a loophole in the law: it does not require the expiration date to be in any particular form. 
So, it can be written in Swahili and still be legal.
Ralph Nader's third cousin, Nadine is a self-appointed Food Quality Spy. 
She has learned that many food product manufacturers have started encoding the product expiration dates to keep customers 
from knowing how old the stuff is.
But the encoding does allow grocers to figure out the expiration dates if for some reason, they want to.

One popular encoding method:

encode the months from Jan to Dec as 'A' through 'L'
encode each digit of the date as 'Q' through 'Z'
encode the year as 'A' through 'Z' meaning 1 through 26 which is then added to 1995.
Nadine found a particularly questionable loaf of bread with this date: ARZM. Write a program to determine the date.*/


#include<iostream>
#include<string>
using namespace std;
double calcYear(string);
string calcMonth(string);
int calcDate(string);
                                                                 
int main()
{
    string str;
    int date, year;
    string month;
    cout<<"enter a valid string :";
    cin>>str;
    month= calcMonth(str);
    date= calcDate(str);
    if(date==0)
    {
         cout<<"the date entered for the decoding of expiry date is wrong .";
         exit(0);
    }
    year=calcYear(str);
    cout<<endl<<"the expiry date is : ";
    cout<<month<<" "<<date<<" "<<year;
    
    return 0;
}

// This function calculates year.
double calcYear(string s)
{
    int year_fix=1995;
    int res;
    int year_1;
    res=int(s[3])-64;
    year_1=year_fix+res;
    return year_1;
}


// This function calculates Month.

string calcMonth(string s1)
{
    int i;
    int ctr=0;
    string ans;
    string b[]={"jan", "feb", "march", "april", "may", "june", "july", 
                "august", "september", "october", "november", "december"};
for(i=65; i<=76; i++)
{
    if(char(i)==s1[0])
    {
        ans=b[ctr];
        break;
    }
    ctr++;
}
return ans;
}

// This function calculates Date.

int calcDate(string s2)
{
    int i;
    int date_1, date_2;
    int final_date;
    int ctr1=0, ctr2=0;
    if(s2[1]>='T' && s2[2]<='Z'||  s2[1]=='U' &&  s2[2]=='U' )  
    {
       return 0; 
    }
    else{
    for(i=81; i<=90; i++)
    {
        if(char(i)==s2[1])
        {
            date_1=ctr1;
            break;
        }
        ctr1++;
    }
    for(i=81; i<=90; i++)
    {
        if(char(i)==s2[2])
        {
            date_2=ctr2;
            break;
        }
        ctr2++;
    }
final_date=date_1*10+date_2;
return final_date;
}
}   

//End of program....