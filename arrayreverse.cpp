#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        int a = arr[i];
        arr[i] = arr[sizeof(arr) / sizeof(int) - 1 - i];
        arr[sizeof(arr) / sizeof(int) - 1 - i] = a;
    }
    cout << "Reversed array is: ";
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
}
