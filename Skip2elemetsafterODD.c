#include <stdio.h>

int main()
{
    int i,j,s,k=0,array[100];
    printf("Enter array elements: ");
    for(i=0;i<50;i++)
    {
    scanf("%d",&array[i]);
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i*2;j++)
        {
            printf("%d\t",array[k]);
            if(array[k]%2!=0)
            {
                k=k+3;
            }
            else
            {
                k++;
            }
        }
        printf("\n");
        for(s=1;s<=i*3&&i<3;s++)
        {
            printf("%d\n",array[k]);
            if(array[k]%2!=0)
            {
                k=k+3;
            }
            else
            {
                k++;
            }
        }
        }

    return 0;
}