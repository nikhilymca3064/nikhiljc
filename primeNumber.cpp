#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "enter a number:";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "the number given " << n << "is not a prime number.";
            break;
        }
    }
    if (i == n)
    {
        cout << "teh number " << n << "is a prime no.";
    }
    return 0;
}