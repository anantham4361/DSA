#include <stdio.h>
#include <conio.h>

void bubble(int a[], int n)
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
    bubble(a,n);
    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}