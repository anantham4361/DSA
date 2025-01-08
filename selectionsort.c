#include <stdio.h>

void selection(int a[], int n)
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void main(){
    int a[10], n , i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d",&a[i]);
    }
    printf("Array elements : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    selection(a,n);
    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}