#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    char n;
    int m;
    cin >> n;
    m = (int)n;

    if (m % 2 == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}