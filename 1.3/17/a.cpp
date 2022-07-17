#include <iostream>
#include <cmath>
using namespace std;

// double xd(float xa, float ya, float xb, float yb)
// {
//     double a, b;

//     a = xb - xa;
//     b = yb - ya;

//     // if (a < 0)
//     //     a = -a;
//     // if (b < 0)
//     //     b = -b;

//     return sqrt(a * a + b * b);
// }
int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    float x1, y1, x2, y2, x3, y3;
    double p, a, b, c, s;

    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);

    a = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    b = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("%.2lf", s);

    return 0;
}
