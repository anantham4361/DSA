#include <stdio.h>

void bubblesort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



void maxSize(int a[], int n)
{
    bubblesort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    
    int maxSize = 1; 
    int currentSize = 1; 

    for (int i = 1; i < n; i++)
    {
        if (a[i]==a[i-1])
        {
            continue;
        }
        
        if (a[i] == a[i - 1] + 1) 
        {
            currentSize++; 
        }
        else
        {
            if (currentSize > maxSize) 
            {
                maxSize = currentSize;
            }
            currentSize = 1; 
        }
    }

    
    if (currentSize > maxSize)
    {
        maxSize = currentSize;
    }

    printf("\nMax consecutive size - %d\n", maxSize);
}

void main()
{

    int s1[] = {10, 12, 13,12, 9, 14};
    maxSize(s1,6);
    int s2[] = {6, 4, 8, 7, 5};
    maxSize(s2,5);

}