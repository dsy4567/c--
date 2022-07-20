#include <iostream>
// #include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    // cout << (int)1.3;

    int n, x, y, pg;
    float _;
    cin >> n >> x >> y;

    if (x == 0)
    {
        cout << n;
        return 0;
    }

    _ = y / x;
    if (y % x == 0)
    {
        pg = n - int(_);
    }
    else
    {
        pg = n - int(_) - 1;
    }
    if (pg < 0)
        printf("0");
    else
        printf("%d", pg);

    return 0;
}