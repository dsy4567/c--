#include <iostream>
// #include <cmath>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    // cout << (int)1.3;

    int h, r;
    const float pi = 3.14159;
    float shui;

    cin >> h >> r;

    shui = 20 / ((pi * r * r * h) / 1000);

    if ((float)((int)(shui)) == shui)
        cout << int(shui);
    else
        cout << int(shui) + 1;
    // printf("%.0f",  + 1);
    return 0;
}