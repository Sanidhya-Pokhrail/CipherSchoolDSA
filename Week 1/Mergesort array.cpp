#include <iostream>
using namespace std;

// pass by reference
void mergeSortArray(int* a, int m, int* b, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            a[k] = a[i];
            i--;
        } else {
            a[k] = b[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        a[k] = b[j];
        j--;
        k--;
    }
}

int main() {
    const int m = 4, n = 4;
    int a[m] = {1, 3, 4, 5};
    int b[n] = {4, 5, 6, 7};

    mergeSortArray(a, m, b, n);

    cout << "Merged Array: ";
    for (int i = 0; i < m + n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


