#include <iostream>
using namespace std;

void insertionSortInBST(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int w1,w2,w3;
    int arr1[] = {2, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    w1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {19, 11, 17, 5, 9, 13, 15, 7, 3, 2};
    w2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {5, 2, 8, 12, 3, 1, 6, 4, 10, 7};
    w3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Sorted nearly sorted array: ";
    printArray(arr1, w1);

    cout << "Sorted completely unsorted array: ";
    printArray(arr2, w2);

    cout << "Sorted random array: ";
    printArray(arr3, w3);

    return 0;
}