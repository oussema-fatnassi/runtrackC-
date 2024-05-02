#include <iostream>
using namespace std;

int* mergeSortedArrays(const int arr1[], int size1, const int arr2[], int size2, int& mergedSize) {
    int* mergedArray = new int[size1 + size2]; 
    int i = 0, j = 0, k = 0;

    for (k = 0; i < size1 && j < size2; k++) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k] = arr1[i++];
        } else {
            mergedArray[k] = arr2[j++];
        }
    }

    for (; i < size1; k++, i++) {
        mergedArray[k] = arr1[i];
    }

    for (; j < size2; k++, j++) {
        mergedArray[k] = arr2[j];
    }

    mergedSize = k;
    return mergedArray;
}

int main() {
    const int arr1[] = {1, 13, 25, 37, 39, 114, 224, 314};
    const int size1 = sizeof(arr1) / sizeof(arr1[0]);
    const int arr2[] = {22, 34, 56, 68, 100};
    const int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize;
    int* mergedArray = mergeSortedArrays(arr1, size1, arr2, size2, mergedSize);

    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    delete[] mergedArray;
    return 0;
}