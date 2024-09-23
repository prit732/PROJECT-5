#include <stdio.h>

int main() {
    int rowSize, colSize;
    
   
    printf("Enter the  row size: ");
    scanf("%d", &rowSize);
    printf("Enter the column size: ");
    scanf("%d", &colSize);

    int array[rowSize][colSize];

    printf("Enter array elements:\n");
    for (int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }


    int rowNumber;
    printf("Enter row number: ");
    scanf("%d", &rowNumber);

   
    int rowSum = 0;
    printf("Elements of row %d: ", rowNumber);
    for (int j = 0; j < colSize; j++) {
        printf("%d", array[rowNumber][j]);
        rowSum += array[rowNumber][j];
        if (j < colSize - 1) {
            printf(", ");
        }
    }
    printf(" sum of row %d: %d\n", rowNumber, rowSum);

   
    int colNumber;
    printf("Enter column number: ");
    scanf("%d", &colNumber);

   
    int colSum = 0;
    printf("Elements of column %d: ", colNumber);
    for (int i = 0; i < rowSize; i++) {
        printf("%d", array[i][colNumber]);
        colSum += array[i][colNumber];
        if (i < rowSize - 1) {
            printf(", ");
        }
    }
    printf(" sum column %d: %d\n", colNumber, colSum);

}
