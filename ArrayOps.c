//Program to perform array traversal, insertion
#include <stdio.h>

void traversal(int a[],int n){
    printf("\nArray elements : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
}

int insertion(int a[],int n,int ele,int index){
    int temp;
    if(n==10){
        printf("\nArray is full\n");
        return 10;
    }
    for (int i = 0; i < n; i++)
    {
        if (i==index)
        {
            n=n+1;
            for (int j = n-1; j > i; j--)
            {   
                a[j]=a[j-1];
            }
            a[i]=ele;
            break;
        }
        
    }
return n;
}




void main(){
    int a[10],n,i,ele,pos;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++){
        printf("Enter %d element :",i+1);
        scanf("%d",&a[i]);
    }
    traversal(a,n);
    printf("\nEnter the element to be inserted : ");
    scanf("%d",&ele);
    printf("Enter the index to insert the element : ");
    scanf("%d",&pos);
    n=insertion(a,n,ele,pos);
    traversal(a,n);
}