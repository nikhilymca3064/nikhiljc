/* A program to implement Distane Between Two Points using constructor*/

#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int_least64_t x, y;

public:
    point(int a, int b) //Parameterized Declaration
    {
        x = a;
        y = b;
    }

    /* To display point */
    void displayPoint(int ctr)
    {

        cout << "The point on plane " << ctr << " is : (" << x << "," << y << ")" << endl;
    }

    /* A Friend function takes the objetcts of classes as an argument*/
    /* It is used to calculate the sum and squares of two points*/

    friend int toFindDistance(point r, point s)
    {
        int a, b, sqr;

        /* The object values of p and q are held by r and s here respectively*/
        a = (s.x - r.x);
        b = (s.y - r.y);
        sqr = (a * a) + (b * b);
        /* The value of sqr is returned to the variable res in main*/
        return sqr;
    }
};

int main()
{
    int var_1, counter = 0;
    double res;

    point p(10, 15);
    counter++;
    p.displayPoint(counter);

    point q(12, 20);
    counter++;
    q.displayPoint(counter);

    var_1 = toFindDistance(p, q);

    res = sqrt(var_1);
    cout << "The diatance between two given points is : " << res;

    return 0;
}