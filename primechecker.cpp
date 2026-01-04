#include <iostream>
using namespace std;
int main()
{
    int n, m = 2;
    cout << "enter a no:";
    cin >> n;
    while (n % m != 0 && m <= n)
    {
        m++;
    }
    if (m == n)
    {
        cout << "prime no";
    }
    else
    {
        cout << "not a prime no";
    }
}
