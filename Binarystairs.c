#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of stairs:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*(i+1));j++)
        {
            if((j%2)!=0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
        }
    return 0;
}
