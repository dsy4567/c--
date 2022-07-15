#include <iostream>
#include <cmath>
using namespace std;

float xd(float xa, float ya, float xb, float yb)
{
    float a, b;

    a = ((xa * 1000) - (xb * 1000)) / 1000;
    b = ((ya * 1000) - (yb * 1000)) / 1000;

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    return sqrt(a * a + b * b);
}

int main()
{
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    float x1, y1, x2, y2, x3, y3, a, b, h, d;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    d = xd(x1, y1, x2, y2);
    h = xd(x1, x3, x3, y3);
    // c = xd(x2, y2, x3, y3);

    // cout << a * 2 << " " << b;

    // if (a > b)
    // {
    //     d = a / 2;
    //     h = sqrt(b * b - d * d);
    // }
    // else
    // {
    //     d = b / 2;
    //     h = sqrt(a * a - d * d);
    // }

    // cout << sqrt(4);
    printf("%.2f", d * h / 2);

    return 0;
}
