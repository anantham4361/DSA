// Input: a[] = {1, 1, 2, 2, 2, 4}, b[] = {2, 2, 4, 4}
// Output: {1, 2, 4}
// Explanation: 1, 2 and 4 are the distinct elements present in either array.

// Input: a[] = {3, 5, 10, 10, 10, 15, 15, 20}, b[] = {5, 10, 10, 15, 30}
// Output: {3, 5, 10, 15, 20, 30}
// Explanation: 3, 5, 10, 15, 20 and 30 are the distinct elements present in either array.

#include <stdio.h>

void arrayPrint(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void unionOfArrays(int a[], int n, int b[], int m)
{
    printf("\nUnion of two arrays : ");
    int u[n], k = 0, p, flag;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            u[k++] = a[i];
        }
    }

    for (int j = 0; j < m; j++)
    {
        flag = 0;
        for (int p = 0; p <= k; p++)
        {
            if (b[j] == u[p])
            {
                flag = 1;
            }
        }
            if (flag == 0)
            {
                u[k++] = b[j];
            }
    }

    arrayPrint(u, k);
}

int main()
{
    int a[] = {3, 5, 10, 10, 10, 15, 15, 20};
    int b[] = {5, 10, 10, 15, 30};
    printf("\n------First case------- \n");
    arrayPrint(a, 8);
    printf("\n");
    arrayPrint(b, 5);
    unionOfArrays(a, 8, b, 5);
    int a1[] = {1, 1, 2, 2, 2, 4};
    int b2[] = {2, 2, 4, 4};
    printf("\n------Second case------- \n");
    arrayPrint(a1, 6);
    printf("\n");
    arrayPrint(b2, 4);
    unionOfArrays(a1, 6, b2, 4);
    return 0;
}