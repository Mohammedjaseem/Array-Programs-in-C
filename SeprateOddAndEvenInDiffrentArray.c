#include <stdio.h>
    int main(){
        int i,even,odd,k,array_size,array[100],odd_array[100],even_array[100];

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        //no of odd elements
        even=0;
        odd=0;
        for(i=0; i<array_size; i++){
            if(array[i]%2==0){
                even_array[even]=array[i];
                even=even+1;
            }
            else{
                odd_array[odd]=array[i];
                odd=odd+1;
            }

        }
        printf("%d Odd Elements: ",odd);
        for(i=0; i<odd; i++){
            printf("%d ",odd_array[i]);
        }
        printf("\n%d Even Elements: ",even);
        for(i=0; i<even; i++){
            printf("%d ",even_array[i]);
        }
    }