#include <stdio.h>
    int main(){
        int i,j,array_size,flag,count;
        int array[30];

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        //checking duplicate elements 
        printf("Unique elements are : "); 
        for(i=0; i<array_size; i++){
            count = 0;
            for(j=0; j<array_size+1; j++){
               if(i!=j){ 
                if(array[i]==array[j]){
                    count=count+1;
                }
                }
            }
            if(count==0){
                printf("%d ",array[i]);
            }
        
    }
    }