#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    long long a, b = 1;

    scanf("%llu", &a);
    for (long long i = 0; i < a; i++)
    {
        b *= 2;
    }

    printf("%llu", b);

    return 0;
}
