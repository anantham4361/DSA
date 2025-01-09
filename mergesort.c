// Merge sort
#include <stdio.h>

void merge(int a[], int left, int right)
{
    if (left >= right) // Corrected base condition
    {
        return;
    }
    int mid = (left + right) / 2;

    
    merge(a, left, mid);
    merge(a, mid + 1, right);

    
    int i = left, j = mid + 1, k = 0;
    int temp[20];

    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i];
            i++;
        }
        else
        {
            temp[k++] = a[j];
            j++;
        }
    }

    
    while (i <= mid)
    {
        temp[k++] = a[i];
        i++;
    }

    
    while (j <= right)
    {
        temp[k++] = a[j];
        j++;
    }

    
    for (int i = left; i <= right; i++)
    {
        a[i] = temp[i - left];
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

    
    merge(a, 0, n - 1);

    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
