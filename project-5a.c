#include<stdio.h>

int main(){
    int size;

    printf("enter earry size : ");
    scanf("%d",&size);

    int box[size];
    for(int i = 0; i < size; i++)
    {
         printf("a[%d] = ",i);
         scanf("%d",&box[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (box[i] < 0 )
        {
             printf("nagetive erray :%d",box[i]);

        }
          
    }
    printf("\n");
    
}