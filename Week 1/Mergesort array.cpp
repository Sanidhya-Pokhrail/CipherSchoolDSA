#include <iostream>
#include <vector>
using namespace std;

void mergeSortArray(vector<int>& a, vector<int>& b) {
    int m = a.size();
    int n = b.size();
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
    int arr1[] = {13, 23, 44, 55};
    int arr2[] = {6, 8, 9,10};

    vector<int> a(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    vector<int> b(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

    mergeSortArray(a, b);

    cout << "Merged Array: ";
    for (int i = 0; i < a.size()+b.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


