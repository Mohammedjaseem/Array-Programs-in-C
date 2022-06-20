#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,location,element,temp;

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

        //Inseration in any location
        printf("Enter location of array ti insert: ");
        scanf("%d",&location);
        location=location-1;

        array_size = array_size+1;

        printf("Enter Element to specify array: ");
        scanf("%d",element);


        //loop to add array in specif location
        for(i=0; i<array_size; i++){
            if(i==location){
                for(i=location; i<array_size; i++);
                  if(i=location){
                    temp = array[i];
                    array[i] = element;
                    array[i+1]= array[i];
                  }
            }            
        }

        printf("\nNew Array: ");
        for(i=0; i<array_size; i++){
            printf("%d",array[i]);
        }
        }

        //not completed
        

        