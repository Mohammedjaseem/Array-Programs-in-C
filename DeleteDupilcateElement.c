#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,duplicate,temp;

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        printf("Entered Array: ");
         for(i=0; i<array_size; i++){
         printf("%d ",array[i]);
     }

        //delete dupilcate
        duplicate = 0;
        for(i=0; i<array_size; i++){
            for(j=i+1; j<array_size; j++){
                if(array[i]==array[j]){
                    duplicate = duplicate+1;
                    if(duplicate>0){
                        for(i=0; i<array_size; i++){
                                array[i]=000;
                    }
                }
                if(array[i]==000){
                    array[i]=array[i+1];
                }
            }
        }
     
     printf("\nArray after removing dupilcates: ");
     for(i=0; i<array_size-duplicate; i++){
         printf("%d ",array[i]);
     }
}}