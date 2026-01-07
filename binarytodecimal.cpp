#include <iostream>
using namespace std;

int decimal(int a)
{
    int b, c = 0, d = 1;
    while (a > 0)
    {
        b = a % 10;
        c = c + b * d;
        d = d * 2;
        a = a / 10;
    }
    return c;
}
int main()
{
    cout << decimal(110010);
}
