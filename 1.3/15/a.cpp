#include <iostream>
// #include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    // cout << (int)1.3;

    int n, x, y;
    float _;
    cin >> n >> x >> y;

    _ = y / x;
    if (y%x == 0)
    {
        cout << n - int(_);
    }
    else
    {
        cout << n - int(_) - 1;
    }

    return 0;
}