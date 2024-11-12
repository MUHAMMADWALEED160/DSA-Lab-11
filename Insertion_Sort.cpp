/*1. Start from the second element(index 1) and assume the first element is already sorted.
2. Compare the current element with the previous elements.
3. Shift all the greater than the current element one position ahead.
4. Insert the current element at its correct position in the sorted part of the array.
5. Repeat the process for all elements.*/
#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;

        //Move elements of arr[0..1-1] that are greater then key
        //to one position ahead of their current position
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"The original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout<<"Sorted array: ";
    printArray(arr, n);

    return 0;
}