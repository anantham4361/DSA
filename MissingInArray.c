// You are given an array arr of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

// Examples:

// Input: arr[] = [1, 2, 3, 5]
// Output: 4
// Explanation: All the numbers from 1 to 5 are present except 4.
// Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
// Output: 6
// Explanation: All the numbers from 1 to 8 are present except 6.



#include<stdio.h>

void arrayPrint(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
}


void bubblesort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                }
                }
}}

void missinginarr(int a[],int n){
    int miss;
    bubblesort(a,n);
    printf("\nMissing element is : ");
    for (int i = 0; i <=n; i++)
    {
      if (a[i]!=i+1)
      {
        printf("%d",i+1);
        break;
      }
      
          
    }
    
}



int main(){
    int arr1[]={1, 2, 3, 5};
    int n=4;
    printf("1st array : ");
    arrayPrint(arr1,n);
    missinginarr(arr1,n);

    int arr2[]={8, 2, 4, 5, 3, 7, 1};
    int n2=7;
    printf("\n2nd array : ");
    arrayPrint(arr2,n2);
    missinginarr(arr2,n2);



    return 0;
}