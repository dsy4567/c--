#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    float x;
    cin >> x;

    if (0 <= x && x < 5)
        printf("%.3f", 2.5 - x);
    if (5 <= x && x < 10)
        printf("%.3f",2 - 1.5 * (x - 3) * (x - 3));
    if (10 <= x && x < 20)
        printf ("%.3f",x / 2 - 1.5);
    return 0;
}