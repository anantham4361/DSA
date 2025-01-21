// You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

// Examples:

// Input: arr = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 2]
// Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
// Input: arr = [10, 4, 2, 4, 1]
// Output: [10, 4, 4, 1]
// Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side
// Input: arr = [5, 10, 20, 40]
// Output: [40]
// Explanation: When an array is sorted in increasing order, only the rightmost element is leader.
// Input: arr = [30, 10, 10, 5]
// Output: [30, 10, 10, 5]
// Explanation: When an array is sorted in non-increasing order, all elements are leaders.

#include <stdio.h>

void arrayPrint(int a[], int n)
{
    printf("\nArray elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void arrayLeader(int a[], int n)
{
    printf("\nArray leaders are: ");
    int flag;
    for (int i = 0; i < n; i++)
    {   
        flag=1;
        for (int j = i; j < n; j++)
        {
            if(a[i]<a[j]){
                flag=0;
            }
        }
        if (flag==1)
        {
            printf("%d ",a[i]);
        }
        
    }
    
}

int main()
{
    int a1[] = {16, 17, 4, 3, 5, 2};
    int a2[] = {10, 4, 2, 4, 1};
    int a3[] = {5, 10, 20, 40};
    int a4[] = {30, 10, 10, 5};
    int n1 = 6, n2 = 5, n3 = 4, n4 = 4;

    arrayPrint(a1, n1);
    arrayLeader(a1, n1);

    arrayPrint(a2, n2);
    arrayLeader(a2, n2);

    arrayPrint(a3, n3);
    arrayLeader(a3, n3);

    arrayPrint(a4, n4);
    arrayLeader(a4, n4);

    return 0;
}