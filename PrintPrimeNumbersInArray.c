#include <stdio.h>
int main(){
    int i,j,flag,num,result,array_size,array[30];

     //Array Limit
        printf("Enter array limit");
        scanf("%d",&array_size);

        //input array elments
        printf("Enter Array Elemets");
        for(i=0; i<array_size; i++){
            scanf("%d",&array[i]);
        }

        printf("Prime Numbers in array are: ");
        for(i=0; i<array_size; i++){
            flag = 0;
            num = array[i];
            for(j=2; j<num; j++){
                if(num%j==0){
                    flag=1;
                    break;
                }

            }
            if(flag==0){
                printf("%d ",array[i]);
            }
        }
                
        }

        //flag rest to zero after loop must

        