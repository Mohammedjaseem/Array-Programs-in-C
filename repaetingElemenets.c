#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,duplicate,dup_count;

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

        //finding repeating elements
        printf("\nRepeating Eelments in array: ");
        for(i=0; i<array_size; i++){
            dup_count=0;
            for(j=i+1; j<array_size; j++){
                if(array[i]==array[j]){
                    dup_count = dup_count + 1;
                }
            }
            if(dup_count>0){
                printf("%d ",array[i]);
            }
        }
    }