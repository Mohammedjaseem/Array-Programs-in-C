#include <stdio.h>
    int main(){
        int i,j,array_size,flag,count,elecount=0;
        int array[30];

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        //Frequency of element 
        for(i=0; i<array_size; i++){
            count=0;
            for(j=0; j<array_size; j++){
                if(array[i]==array[j]){
                    count=count+1;
                    elecount=elecount+1;
                }
            }
                printf("Element %d is %d times in array\n",array[i],count);
        }
    }