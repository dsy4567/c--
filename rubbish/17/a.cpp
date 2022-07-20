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
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int a1, a2, n, a;

    scanf("%u%u%u", &a1, &a2, &n);
    a = a2 - a1;
    printf("%u", a * n + a1 - a);

    return 0;
}
