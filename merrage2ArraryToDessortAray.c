#include <stdio.h>
int main(){
    int i,j,arraysize1,arraysize2,arraysize3,temp,array1[50],array2[50],array3[100];

    printf("Enter 1st array size: ");
    scanf("%d",&arraysize1);

    printf("Enter 1st array elements: ");
    for(i=0; i<arraysize1; i++){
        scanf("%d",&array1[i]);
    }

    printf("Enter 2nd array size: ");
    scanf("%d",&arraysize2);

    printf("Enter 2nd array elements: ");
    for(i=0; i<arraysize2; i++){
        scanf("%d",&array2[i]);
    }

    arraysize3 = (arraysize1 + arraysize2) ;
    for(i=0; i<arraysize1; i++){
        array3[i]=array1[i];
    }
    for(j=0; j<arraysize2; j++){
        array3[arraysize1+j]=array2[j];
    }

    printf("merged array: ");
    for(i=0; i<arraysize3; i++){
        printf("%d ",array3[i]);
    }

    //desending order mereged array
    printf("\n Desending merged array: ");
    for (i=0; i<arraysize3; i++){
        for(j=i+1; j<arraysize3; j++){
            if(array3[i]<array3[j]){
                temp=array3[i];
                array3[i]=array3[j];
                array3[j]=temp;
            }
        }
    }

    //printing dec merged
    for(i=0; i<arraysize3; i++){
        printf("%d ",array3[i]);
    }
}