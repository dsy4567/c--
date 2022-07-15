#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    int n;
    cin >> n;

    if (n==0)
    {
        cout << "zero";
    }else if (n>0)
    {
        cout << "positive";
    }else if (n<0)
    {
        cout << "negative";
    }

    return 0;
}