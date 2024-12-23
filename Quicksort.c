#include <stdio.h>
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = (low - 1);  

    for (int j = low; j <= high - 1; j++) {
        
        if (arr[j] <= pivot) {
            i++;  
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return (i + 1); 
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        
        int pi = partition(arr, low, high);

        
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high); 
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: \n");
    printArray(arr, arrSize);

    quickSort(arr, 0, arrSize - 1);

    printf("\nSorted array: \n");
    printArray(arr, arrSize);
    
    return 0;
}
output
Given array: 
12 11 13 5 6 7 

Sorted array: 
5 6 7 11 12 13 


