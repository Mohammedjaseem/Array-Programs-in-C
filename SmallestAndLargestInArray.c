#include <stdio.h>
    int main(){
        int i,j,array_size,largest,smallest,elecount=0;
        int array[30];

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        //Largest in array
        largest = array[0];
           for (i=0; i<array_size; i++){
               if(largest<array[i]){
                   largest = array[i];
               }
           }

          for (i=0; i<array_size; i++){
              smallest = array[0];
               if(smallest>array[i]){
                   smallest = array[i];
                }
           }

        printf("Smallest number: %d \n Largest Number: %d",smallest,largest);
    }