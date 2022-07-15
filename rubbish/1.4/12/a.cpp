#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    float n, q, z;
    cin >> n;

    q = 27 + 23 + (n / 3);
    z = n / 12 * 10;

    if (q == z)
    {
        cout << "All";
    }
    else if (q > z)
    {
        cout << "Walk";
    }
    else if (q < z)
    {
        cout << "Bike";
    }

    return 0;
}