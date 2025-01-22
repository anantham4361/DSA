// Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array.

// Follow up: Don't solve it using the inbuilt sort function.

// Examples :

// Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
// Output:  7
// Explanation: 3rd smallest element in the given array is 7.
// Input: arr[] = [2, 3, 1, 20, 15], k = 4 
// Output: 15
// Explanation: 4th smallest element in the given array is 15.


#include<stdio.h>

void printArray(int a[],int n){
    printf("\nArray elements are : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
}

int findKthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
    }
    }
    printf("\n%d Smallest element is %d",k,arr[k-1]);
}

int main(){
int a[]={7, 10, 4, 3, 20, 15};
int k = 3;
printArray(a,6);
findKthSmallest(a,6,k);

int b[]={2, 3, 1, 20, 15};
int k2=4;
printArray(b,5);
findKthSmallest(b,5,k2);

}