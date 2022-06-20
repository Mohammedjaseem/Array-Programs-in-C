#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,location,element,temp;

        //Array Limit
        printf("Enter array limit: ");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets: ");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        printf("Entered Array: ");
         for(i=0; i<array_size; i++){
         printf("%d ",array[i]);
        }

        //Finding negative elemets in array
        printf("\nNegative elements in array: ");
        for(i=0; i<array_size; i++){
            if(array[i]+array[i] < 0){
                printf("%d ",array[i]);
            }
        }
    }