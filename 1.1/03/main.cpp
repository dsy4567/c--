#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[3];
    int i, j;
    for (i = 0; i < 3; i++)
        cin >> a[i];
    for (i = 0; i < 3; i++)
        cout << setw(8) << a[i] << " ";
    return 0;"
}
