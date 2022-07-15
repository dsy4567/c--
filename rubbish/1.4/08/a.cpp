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

    if (n %3==0&&n%5==0)
    {
        cout << "YES";
    }
    else {
        cout << "NO";}

    return 0;
}