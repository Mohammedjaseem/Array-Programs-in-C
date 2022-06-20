#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,sum,avg;

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        printf("Entered array elements: ");
        for(i=0; i<array_size; i++){
            printf("%d ",array[i]);
        }

        //Avargae of array elemets
        sum=0;
        printf("\nAvarage of elemets in array: ");
        for(i=0; i<array_size; i++){
            sum = sum+array[i];
        }
        //Avargae totalsum/totalelements

        avg = sum/array_size;
        printf("%d",avg);
    }