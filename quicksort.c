#include <stdio.h>

int partition(int arr[], int low, int high) {
    int p = arr[low];
    int i = low;
    int j = high;
    int temp;

    while (i < j) {
        while (arr[i] <= p && i < high) { 
            i++;
        }
       
        while (arr[j] > p && j > low) { 
            j--;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void main(){
    int a[20], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array elements before sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
   
    quickSort(a, 0, n - 1); 

    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

}