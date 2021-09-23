/* The program is to check if a given triplet series is a pythagoran triplet or not.*/

#include <iostream>
using namespace std;
int max(int, int, int);
bool pythagorianTriplet(int, int, int);
int main()
{
    int x, y, z;
    cout << "enter three numbers for pythgorian triplets:";
    cin >> x >> y >> z;
    if (pythagorianTriplet(x, y, z))
    {
        cout << "the numbers " << x << " " << y << " " << z << " are pythogrian triplets.";
    }
    else
    {
        cout << "the numbers " << x << " " << y << " " << z << " are not a pythogrian triplets.";
    }

    return 0;
}

int max(int a, int b, int c)
{
    int max;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    return max;
}

bool pythagorianTriplet(int a, int b, int c)

{
    int max1, min1, min2;
    max1 = max(a, b, c);

    if (max1 == a)
    {
        min1 = b;
        min2 = c;
    }
    else if (max1 == b)
    {
        min1 = a;
        min2 = c;
    }
    else
    {
        min1 = a;
        min2 = b;
    }
    if (max1 * max1 == min1 * min1 + min2 * min2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
