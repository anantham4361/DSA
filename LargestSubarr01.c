// Given an array arr of 0s and 1s. Find and return the length of the longest subarray with equal number of 0s and 1s.

// Examples:

// Input: arr[] = [1, 0, 1, 1, 1, 0, 0]
// Output: 6
// Explanation: arr[1...6] is the longest subarray with three 0s and three 1s.
// Input: arr[] = [0, 0, 1, 1, 0]
// Output: 4
// Explnation: arr[0...3] or arr[1...4] is the longest subarray with two 0s and two 1s.
// Input: arr[] = [0]
// Output: 0
// Explnation: There is no subarray with an equal number of 0s and 1s

#include <stdio.h>

void arrayprint(int a[], int n)
{
    printf("\nArray elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void LargestSubArr01(int a[], int n)
{
    int count0 = 0, count1 = 0, max = 0, i, j;
    for (i = 0; i < n; i++)
    {
        (a[i] == 0)?count0++:count1++;
    }
    max= (count0==count1)?count1:(count0<count1)?count0:count1;
      
    
    printf("\n%d",(max+max));
}

int main()
{
    int arr1[] = {1, 0, 1, 1, 1, 0, 0};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    arrayprint(arr1, n);
    LargestSubArr01(arr1, n);

    int arr2[] = {0, 0, 1, 1, 0};
    n = sizeof(arr2) / sizeof(arr2[0]);
    arrayprint(arr2, n);
    LargestSubArr01(arr2, n);

    int arr3[] = {0};
    n = 1;
    arrayprint(arr3, n);
    LargestSubArr01(arr3, n);
}