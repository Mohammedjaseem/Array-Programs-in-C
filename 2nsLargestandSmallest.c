#include <stdio.h>
    int main(){
        int i,j,k,l,array[50],array_size,large,small,temp,count=0;

        //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }


        array_size = array_size - count;
        printf("Array after removed dulicate: ");
        for(i=0; i<array_size; i++){
            printf("%d ",array[i]);
        }

        printf("%d is new array size",array_size);

        //sort the array
        for(i=0; i<array_size; i++){
            for(j=i+1; j<array_size; j++){
                if ( array[j]<array[i]){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
        printf("\n2nd largest number: %d\n",array[array_size-2]);
        printf("2nd Smallest number: %d\n",array[1]);
    }