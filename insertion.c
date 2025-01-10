// Insertion sort
#include <stdio.h>

void insertionSort(int arr[], int n) {


    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
      
        arr[j + 1] = key;
    }
}



void main()
{
    int a[20], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array elements before sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    insertionSort(a,n);
    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
