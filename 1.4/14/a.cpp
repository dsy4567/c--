#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int x, z;
    string y;
    cin >> x >> y;

        z += 8;
    if (x - 1000 > 0)
        z += ((x - 1000 - (x - 1000) % 500) / 500 + 1) * 4;
    if (y == "y")
        z += 5;
    cout << z;
    return 0;
}