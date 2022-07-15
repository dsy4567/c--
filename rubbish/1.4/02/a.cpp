#include <iostream>
int main()
{
    double n;

    scanf("%lf", &n);

    if (n > 0)
    {
        printf("%.2lf", n);
    }
    else if (n == 0)
    {
        printf("0.00");
    }
    else
    {
        printf("%.2lf", -n);
    }
}