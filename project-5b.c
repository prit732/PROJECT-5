#include <stdio.h>

int main() {
    int rowsize, colsize,lar;
    
   
    printf("Enter the row size: ");
    scanf("%d", &rowsize);
    printf("Enter the column size: ");
    scanf("%d", &colsize);
    
    int a[rowsize][colsize];

    
    printf("Enter array elements:\n");
    for (int i = 0; i < rowsize; i++) {
        for (int j = 0; j < colsize; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
 
  
    for (int i = 0; i < rowsize; i++){
        for (int j = 0; j < colsize; j++){
            if (a[i][j] > lar) {
                lar = a[i][j];
            }
        }
    }   
    
  
    printf("  element: %d\n", lar);
}
