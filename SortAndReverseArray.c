#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,temp;

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

        //Sort array
        for(i=0; i<array_size; i++){
            for(j=i+1; j<array_size; j++){
                if (array[i]>array[j]){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
        printf("\nSorted & assending order array: ");
            for(i=0; i<array_size; i++){
                printf("%d ",array[i]);
            }
        printf("\nRevised array & desending order: ");
            for(i=array_size-1; i>=0; i--){
                printf("%d ",array[i]);
            }
        }
