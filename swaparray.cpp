#include <iostream>
using namespace std;

int s(int array[], int n)
{
    int i, j, max = 0, min = 0, maxind = 0, minind = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxind = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (array[j] < min)
        {
            min = array[j];
            minind = j;
        }
    }
    swap(array[maxind], array[minind]);
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(int);
    s(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
