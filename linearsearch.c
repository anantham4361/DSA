#include<stdio.h>
int linearSearch(int a[],int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key)
        return i;
        }
        return -1;
        }
void main(){
    int a[10],n,key,i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array :\n");
    for(i=0;i<n;i++){
printf("Enter element %d : ",i+1);
    scanf("%d",&a[i]);
    }
     printf("Array elements are : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("Enter the element to be searched : ");
    scanf("%d",&key);
    
    i=linearSearch(a,n,key);
    if(i!=-1)
    {
        printf("Element found at index %d",i);
    }else{
        printf("Element not found");
    }
}


