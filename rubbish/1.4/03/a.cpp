#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}