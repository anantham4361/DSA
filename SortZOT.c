// Input: arr[] = [0, 1, 2, 0, 1, 2]
// Output: [0, 0, 1, 1, 2, 2]
// Explanation: 0s 1s and 2s are segregated into ascending order.
// Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
// Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
// Explanation: 0s 1s and 2s are segregated into ascending order.

#include<stdio.h>
void arrayPrint(int a[],int n){
    printf("\nArray elements : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
        }
}

void sortZOT(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(){
    int a1[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n1=sizeof(a1)/sizeof(a1[0]);
    arrayPrint(a1,n1);
    sortZOT(a1,n1);
    printf("\nAfter sorting");
    arrayPrint(a1,n1);
    

    int a2[]={0, 1, 2, 0, 1, 2};
    int n2=sizeof(a2)/sizeof(a2[0]);
    arrayPrint(a2,n2);
    sortZOT(a2,n2);
    printf("\nAfter sorting");
    arrayPrint(a2,n2);

    return 0;
}