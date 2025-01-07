#include <stdio.h>
int binary(int a[], int key, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (a[mid] == key)
    {
        return mid;
    }
    else if (a[mid] > key)
    {
        return binary(a, key, start, mid - 1);
    }
    else
    {
        return binary(a, key, mid + 1, end);
    }
}

void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void main()
{
    int a[10], n, key, i;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array :\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    sort(a,n);
    printf("Array elements are : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\nEnter the element to be searched : ");
    scanf("%d", &key);
    i = binary(a, key, 0,n-1);
    if (i != -1)
    {
        printf("Element found at index %d", i);
    }
    else
    {
        printf("Element not found");
    }
}