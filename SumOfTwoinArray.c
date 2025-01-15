#include<stdio.h>

void sumofTwo(int a[],int n,int t){
for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (i==j)
        {
            continue;
        }
        else{
            if (a[i]+a[j]==t)
            {
                printf("%d %d\n",a[i],a[j]);
            }
        }
        
    }
    
}


}

void main(){
    int a[]={1,2,3,4,5,6,7,8};
    sumofTwo(a,8,9);
    int b[]={3,3,5,1,0,4,6};
    sumofTwo(b,7,6);
}