/* The program is to find the how many prime numbers are there between two given numbers*/

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2, i, j, counter = 0;
    cout << "num1 is : ";
    cin >> num_1;
    cout << endl
         << "num2 is :";
    cin >> num_2;
    for (i = num_1; i <= num_2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << endl;
            counter++;
        }
    }
    cout << "the number of prime numbers between " << num_1 << " and " << num_2 << " is :"
         << " " << counter;

    return 0;
}