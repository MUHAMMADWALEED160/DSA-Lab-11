#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    int w1, w2,w3;

    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    w1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    w2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[] = {5, 2, 8, 12, 3, 1, 6, 4, 10, 7};
    w3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Sorted already sorted array: ";
    printArray(arr1, w1);

    cout << "Sorted reverse sorted array: ";
    printArray(arr2, w2);

    cout << "Sorted random unsorted array: ";
    printArray(arr3, w3);

    return 0;
}