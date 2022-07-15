#include <iostream>
using namespace std;
int main()
{
    freopen("clock.in", "r", stdin);
    freopen("clock.ans", "w", stdout);

    int hh, mm, a;
    char emm;
    string out = "";

    cin >> a;
    // cout << "hh";

    for (size_t i = 0; i < a; i++)
    {
        cin >> hh >> emm >> mm;
        // cout << hh << mm;
        if (i != 0)
        {
            cout << "\n";
        }
        if (!(hh <= 24 && hh >= 0))
        {
            cout << "~";
            continue;
        }
        if (hh > 12)
        {
            hh = hh - 12;
        }
        if (hh == 0)
        {
            hh = 12;
        }
        if (mm == 0)
        {

            for (int i = 0; i < hh; i++)
            {
                out += "Dang";
            }

            // out += "";
            cout << out;
            out = "";
        }
        else
        {
            cout << "~";
        }
    }

    // cout << in;
    return 0;
}