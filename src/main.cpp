#include "foo.h"
#include <iostream>
#include <math.h>
using namespace std;
const float PI = 3.1415;
int main()
{
    int a, b, c, x1, y1, r1, x2, y2, r2;
    float p, s;

    cout << "Enter x, y, radius of 1-st circle: ";
    cin >> x1 >> y1 >> r1;
    p = PerimetrC(r, PI);
    s = SquareC(r, PI);
    cout << "Perimetr: " << p << "  Square:  " << s << endl;
 
    cout << "Enter radius of 2-st circle: ";
    cin >> x2 >> y2 >> r2;
    p = PerimetrC(r, PI);
    s = SquareC(r, PI);
    cout << "Perimetr: " << p << "  Square:  " << s << endl;

    cout << "Enter sides of triangle(a,b,c): ";
    cin >> a >> b >> c;
    p = PerimetrT(a, b, c);
    s = SquareT(a, b, c);
    cout << endl << "Perimetr: " << p << "   Square: " << s;
    return 0;
}
