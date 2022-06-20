#include <stdio.h>
    int main(){
        int array[30],i=0,j=0,temp,limit;

        printf("Entery Array Limit");
        scanf("%d",&limit);

        printf("Enter array elements: ");
        for(i=0; i<limit; i++){
            scanf("%d",&array[i]);
        }

        printf("\n Entered array: ");
            for(i=0; i<limit; i++){
            printf("%d",&array[i]);
        }
        
         while(i<j){
        //swap
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        i++;  
        j--;  
         }

        printf("\n Revised array: ");
            for(i=0; i<limit; i++){
            printf("%d",&array[i]);
        }
    }