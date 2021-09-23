/* A program is to find how many subarrays are there in the given array*/

#include <iostream>
using namespace std;
void printSubarray(int[], int);

int main()
{

    int n, i;
    cout << "enter the no. of elements of an array : ";
    cin >> n;
    int a[n];
    cout << "enter elements of an array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl
         << "total no. of subarrays will be : " << n * (n + 1) / 2 << endl;
    printSubarray(a, n);
    return 0;
}

void printSubarray(int a[], int n)
{
    int i, j, k, counter = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
            counter++;
        }
        cout << endl;
    }
    cout << endl
         << counter;
}
