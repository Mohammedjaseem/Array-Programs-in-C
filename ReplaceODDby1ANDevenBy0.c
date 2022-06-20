#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,count=0;

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

        //Replace odd by 1 & even by 0
        printf("\n Replaced array: ");
        for(i=0; i<array_size; i++){
            if(array[i]%2==0){
                array[i]=0;
                printf("%d ",array[i]);
            }
            else{
                array[i]=1;
                printf("%d ",array[i]);
            }
        }

    }