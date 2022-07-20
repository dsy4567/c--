#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    float xa, ya, xb, yb, a, b;

    cin >> xa >> ya;
    cin >> xb >> yb;

    a = ((xa * 1000) - (xb * 1000)) / 1000;
    b = ((ya * 1000) - (yb * 1000)) / 1000;

    // cout << a << b;

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    // cout << sqrt(4);
    printf("%.3f", sqrt(a * a + b * b));

    return 0;
}