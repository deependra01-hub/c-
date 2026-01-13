#include <iostream>
using namespace std;

int unique(int arr1[], int n, int arr2[]) {
    int m = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            arr2[m] = arr1[i];
            m++;
        }
    }
    return m;
}

int main() {
    int arr1[] = {1,2,3,4,5,1,2,3};
    int n = sizeof(arr1) / sizeof(int);
    int arr2[n];

    int m = unique(arr1, n, arr2);

    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
}

