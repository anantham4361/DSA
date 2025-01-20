// Input: mat[][] = [[1, 2, 3]
//                              [1, 4, 9]
//                              [76, 34, 21]]

// Output :
// 3
// 9
// 76

// Input: mat[][] = [[1, 2, 3, 21]
//                              [12, 1, 65, 9]
//                              [1, 56, 34, 2]]
// Output :
// 21
// 65
// 56

#include <stdio.h>

void matrixPrint(int a[][5],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
            }
            printf("\n");
            }
}

void maxInMatrix(int a[][5], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int maxRow = a[i][0];  
        for (int j = 1; j < col; j++) 
        {
            if (a[i][j] > maxRow)
            {
                maxRow = a[i][j];
            }
        }
        printf("%d\n", maxRow);
    }
}

int main()
{
    int a[3][5] = {{1, 2, 3}, {1, 4, 9}, {76, 34, 21}};
    int row = 3, col = 3;
    printf("\nMatrix is : \n");
    matrixPrint(a, row, col);
    maxInMatrix(a, row, col);

   int b[3][5]={{1, 2, 3, 21},{12, 1, 65, 9},{1, 56, 34, 2}};
   row = 3; col = 4;
   printf("\nMatrix is : \n");
   matrixPrint(b, row, col);
   maxInMatrix(b, row, col);
    return 0;
}

