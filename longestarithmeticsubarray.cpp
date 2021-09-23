/*program to find out the longest array length which has the same common difference between its two contiguous elements...*/

#include <iostream>
using namespace std;
void longestArithmeticSubarray(int[], int);

int main()
{
    int n, i;
    cout << "entre the value of array length :";
    cin >> n;
    int a[n];
    cout << "enter the elements of an array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    longestArithmeticSubarray(a, n);
    return 0;
}

void longestArithmeticSubarray(int a[], int n)
{
    int i, ans = 2, curr = 2, pd, save;
    pd = a[1] - a[0];
    for (i = 2; i < n; i++)
    {
        if (pd == a[i] - a[i - 1])
        {
            curr++;
            save = pd;
        }
        else
        {
            pd = a[i] - a[i - 1];
            curr = 2;
        }
        ans = max(ans, curr);
    }
    cout << "the longest arithmetic subarray which has the same common difference is : " << ans << " and that same common difference is : " << save;
}