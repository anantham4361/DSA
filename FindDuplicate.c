// Input: n = 7, arr[] = [1, 2, 3, 6, 3, 6, 1]
// Output: 1, 3, 6
// Explanation: The numbers 1 , 3 and 6 appears more than once in the array.

// Input : n = 5, arr[] = [1, 2, 3, 4 ,3]
// Output: 3
// Explanation: The number 3 appears more than once in the array.

#include <stdio.h>

void findDuplicate(int a[], int n)
{
    printf("\nDuplicate elements are: ");
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = i; j < n; j++)
        {
            if (a[i] == a[j] )
                count++;
        }
        if (count > 1)
            printf("%d ", a[i]);
    }
}

void arrayPrint(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
}

int main()
{
    int arr1[] = {1, 2, 3, 6, 3, 6, 1};
    int arr2[] = {1, 2, 3, 4, 3};
    printf("1st array : ");
    arrayPrint(arr1,7);
    findDuplicate(arr1, 7);
    printf("\n2nd array : ");
    arrayPrint(arr2,5);
    findDuplicate(arr2, 5);
    return 0;
}
