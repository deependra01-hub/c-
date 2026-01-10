#include <iostream>
using namespace std;
int main()
{
    int search, a = -1;
    cout << "enter element to be searched: ";
    cin >> search;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] == search)
        {
            a = i;
            cout << "element found at index: " << a;
        }
    }
    if (a == -1)
    {
        cout << a;
    }
}
