#include <iostream>
using namespace std;

int binary(int a)
{
    int b, e = 0, c = 0, d = 1;

    while (a > 0)
    {
        b = a % 2;
        c = c + b * d;
        d = d * 10;

        a = a / 2;
    }
    cout << c;
}
int main()
{
    binary(50);
}
