#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    // n = (int)n;

    if (n >= 100||n<=9)
    {
        cout << "0";
    }
    else {
        cout << "1";}

    return 0;
}