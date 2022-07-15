#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int n, m;
    cin >> n >> m;
    // n = (int)n;

    if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
    {
        cout << "3 5 7";
    }
    else if (n % 5 == 0 && n % 7 == 0)
    {
        cout << "5 7";
    }
    else if (n % 3 == 0 && n % 7 == 0)
    {
        cout << "3 7";
    }
    else if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "3 5";
    }

    else if (n % 3 == 0)
    {
        cout << "3";
    }
    else if (n % 5 == 0)
    {
        cout << "5";
    }
    else if (n % 7 == 0)
    {
        cout << "7";
    }
    else
    {
        cout << "n";
    }

    return 0;
}