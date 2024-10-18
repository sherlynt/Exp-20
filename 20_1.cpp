#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void s_sort(int *a, int elements) {
    for (int n = 0; n < elements - 1; n++) {
        for (int i = n + 1; i < elements; i++) {
            if (a[n] > a[i]) {
                swap(&a[n], &a[i]);
            }
        }
    }
}

int main() {
    int no_el;
    cout << "No. of elements in array: ";
    cin >> no_el;

    int arr[no_el];
    cout << "Enter " << no_el << " elements:" << endl;
    for (int i = 0; i < no_el; i++) {
        cin >> arr[i];
    }

    s_sort(arr, no_el);

    cout << "Sorted array: ";
    for (int i = 0; i < no_el; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
