#include <stdio.h>
    int main(){
        int i,j,array_size,flag=0,count=0;
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

        for(i=0; i<array_size; i++){
            for(j=i+1; j<array_size; j++){
                 if (array[i]==array[j]){
                     count= count + 1;
                 }
            }  
        }
        if(count>0){
                printf("Total Dupilcate Elements is %d",count);

            }
    }