#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *left = new int[len1];
    int *right = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++) {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = arr[k++];
    }

    // merge logic
    int leftIndex = 0, rightIndex = 0, mainArrayIndex = s;
    while (leftIndex < len1 && rightIndex < len2) {
        if (left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        } else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Copy remaining elements
    while (leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while (rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // Deallocate memory
    delete[] left;
    delete[] right;
}

void mergeSort(int* arr, int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = (s + e) / 2;

    // Sort left part
    mergeSort(arr, s, mid);

    // Sort right part
    mergeSort(arr, mid + 1, e);

    // Merge two sorted parts
    merge(arr, s, e);
}

int main() {
    int arr[] = {4, 5, 13, 2, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
