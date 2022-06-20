#include <stdio.h>
    int main(){
        int i,array[50],array_size,delete;

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        //location based delete
        printf("Enter the location to delete: ");
        scanf("%d",&delete);

         printf("Enetred array: ");
        for(i=0; i<array_size; i++){
                printf("%d ",array[i]);
        }

        for(i=0; i<array_size; i++){
            if(i==delete-1){
                for(i=delete-1; i<array_size; i++){
                array[i]=array[i+1];
                }
            }
        }
        printf("\nArray after element removed: ");
        for(i=0; i<array_size-1; i++){
                printf("%d ",array[i]);
        }

    }
