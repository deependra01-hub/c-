#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 0;

    for (a; a <= 10; a++)
    {
        b = b + a;
    }
    cout << b << endl;
    return 0;
}
