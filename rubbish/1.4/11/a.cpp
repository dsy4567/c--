#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int n,m;
    cin >> n>>m;
    // n = (int)n;

    if (n==1||n==3||n==5)
    {
        cout << "NO";
    }
    else {
        cout << "YES";}

    return 0;
}