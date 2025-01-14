#include<stdio.h>

void main(){
    int a[]={1,2,3,4,5,6};
    int n=6;
    int temp;
    printf("Before reversing array : ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    
    for (int i = 0; i < n/2; i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    printf("\nAfter reversing array : ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    

    
}