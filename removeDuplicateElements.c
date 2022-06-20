#include <stdio.h>

    int main(){
        int i,j,l,k,array[50],array_size=0,temp;
    

    // Decalre array size
    printf("Enter array Size: ");
    scanf("%d",&array_size);

    //Addding elements to array
    printf("Enter array Elements: ");
    for(i=0; i<array_size; i++){
        scanf("%d",&array[i]);
    }

    // now we remove dupilicate elements 

    for(i=0; i<array_size; i++){
        for(j=1; j<=array_size; j++){
            if(array[i]==array[j]){
                for(k=j; k<array_size-1;  k++){
                    array[k]=array[k+1];
                }
                //we remove one element so we need decress array limt
                array_size--;
                //j value cant be increse
                j--;
            }
        }
       
        //Sort array
        for(i=0; i<array_size; i++){
            for(j=i+1; j<array_size; j++){
                if (array[i]>array[j]){
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }

         printf("\nNew array after sort: ");
        for(i=0; i<array_size; i++){
            printf("%d ",array[i]);
        }

        printf("\n2nd Largest Number: %d",array[array_size-2]);
        printf("\n2nd Smallest number: %d",array[1]);
    }
    }