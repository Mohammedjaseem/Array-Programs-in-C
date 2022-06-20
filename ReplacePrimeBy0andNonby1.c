#include <stdio.h>
    int main(){
        int i,j,array[50],array_size,large,num,temp;

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

        //Replacing array by all prime numbers by 0 and non-prime numbers by 1.
        printf("\nReplaced array: ");

        for(i=0; i<array_size; i++){
            num = array[i];
            for(j=2; j<num; j++){
                if(num%j==0){
                    array[i]=0;
                    break;
                    }
                else {
                    array[i]=1;
                    }
        }
        printf("%d ",array[i]);
        }
    }