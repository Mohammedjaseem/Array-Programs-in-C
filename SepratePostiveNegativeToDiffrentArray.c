#include <stdio.h>
    int main(){
        int i,j,k,array_size,num,count,array[50];

         //Array array_size
        printf("Enter  array_size: ");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets: ");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        printf("Entered Array: ");
         for(i=0; i<array_size; i++){
         printf("%d ",array[i]);
        }
        
         for(i=0; i<=array_size; i++){
             num=array[i];
           for(j=2; j<=num-1; j++){
                count=0;
                if (array[i]%j!=0){
                    for(k=i; k<array_size; k++){
                        array[k]=array[k+1];
                    }
                    count=count+1;
                }
           }
        }

        printf("count; %d",count);
        printf("\nArray prime removed: ");
        for(i=0; i<array_size-count; i++){
          printf("%d ",array[i]);
        }

       
    }