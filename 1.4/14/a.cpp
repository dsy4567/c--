#include <iostream>
// #include <cmath>

using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    // cout << (int)1.3;

    long long n, zj=0, zy=0, zt=0;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        long long j, y, t;
        scanf("%lld %lld %lld", &j, &y, &t);
        zj += j;
        zt += t;
        zy += y;
    }
    printf("%lld %lld %lld %lld", zj, zy, zt, zj + zy + zt);

    return 0;
}