#include<stdio.h>
void main()
{
    int k,i,sum=0,num[5][5];
    for(i=0;i<=4;i++)
    {
        for(k=0;k<=4;k++)
        scanf("%d",num[i][k]);
        sum +=num[i][k];
    }
    printf("SUM id; %d",sum);
}