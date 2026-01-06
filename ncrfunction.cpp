#include <iostream>
using namespace std;
int ncr(int n, int r)
{
    int s = 1, d = 1, e = 1;
    for (int i = 1; i <= n; i++)
    {
        s = s * i;
    }
    cout << s << endl;
    for (int j = 1; j <= r; j++)
    {
        d = d * j;
    }
    cout << d << endl;

    int c = n - r;
    for (int k = 1; k <= c; k++)
    {
        e = e * k;
    }
    cout << e << endl;

    cout << "ncr is " << s / (d * e);
}

int main()
{
    int n = 7, r = 2;
    ncr(n, r);
}
