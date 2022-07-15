#include <iostream>
using namespace std;
int main()
{
    string inp1, inp2, inp3, opt = "";
    cin >> inp1 >> inp2 >> inp3;

    // for (size_t i = 0; i < (9 - inp1.size()); i++)
    // {
    //     opt += " ";Capacity: Returns the number of characters in the string, not including any null-termination.
    // }
    // cout << inp1.size() << " " << inp1 << " " << inp2 << " " << inp3 << " " << (double)9 - inp1.size()<<"\n";
    opt += inp1;
    if (((double)8 - inp1.size()) > 0)
    {
        for (size_t i = 0; i < ((double)8 - inp1.size()); i++)
        {
            opt += " ";
        }
    }
    else
    {

        opt += " ";
    }

    if (((double)8 - inp2.size()) > 0)
    {
        for (size_t i = 0; i < ((double)8 - inp2.size()); i++)
        {
            opt += " ";
        }
    }
    else
    {

        opt += " ";
    }
    opt += inp2;

    if (((double)8 - inp2.size()) > 0)
    {
        for (size_t i = 0; i < ((double)8 - inp2.size()); i++)
        {
            opt += " ";
        }
    }
    else
    {

        opt += " ";
    }
    opt += inp3;

    cout << opt;
    return 0;
}