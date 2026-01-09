#include <iostream>
using namespace std;
int main()
{
    int array[5] = {1, 2, 3, 4, 0};
    int min = array[0];
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << min;
}
