/* A program is to find the sum of all the SubArrays in the given Array....*/

#include <iostream>
using namespace std;
void sumOfAllSubarrays(int[], int);
int main()
{
    int n, i;
    cout << "enter the no. of elements of an array : ";
    cin >> n;
    int a[n];
    cout << "enter the no. of elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sumOfAllSubarrays(a, n);
    return 0;
}

void sumOfAllSubarrays(int a[], int n)
{
    int sum, i, j;
    for (i = 0; i < n; i++)
    {
        sum = 0;
        cout << "The sum of " << i + 1 << " subarray is : " << endl;
        for (j = i; j < n; j++)
        {
            int save = a[j];

            cout << sum << "+" << save << "=";
            sum = sum + a[j];
            cout << sum << endl;
        }
    }
}