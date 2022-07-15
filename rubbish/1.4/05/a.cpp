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

    if (n > m)
    {
        cout << ">";
    }
    else if(n==m)
    {
        cout << "=";
    }
    else if(n<m)
    {
        cout << "<";
    }

    return 0;
}