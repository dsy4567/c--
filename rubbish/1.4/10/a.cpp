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

    if ((n <60&&m>=60)||(n >=60&&m<60))
    {
        cout << "1";
    }
    else {
        cout << "0";}

    return 0;
}