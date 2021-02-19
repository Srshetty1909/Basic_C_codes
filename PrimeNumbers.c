#include<stdio.h>
void checkprime(int b);
int main()
{
    int n,a[10],i;
    printf("Enter the number of numbers to be checked (max 10):");
    scanf("%d",&n);
    printf("Enter the numbers to be checked:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        checkprime(a[i]);
    }
    return(0);
}
void checkprime(int b)
{
    int flag, i;
    if(b<2)
    {
        printf("%d is not a prime number!!\n",b);
    }
    else if(b==2)
    {
        printf("%d is a prime number!!\n",b);
    }
    else
    {
        flag = 0;
        for(i=2; i<b; i++)
        {
            if((b%i)==0)
            {
                flag = (flag+1);
            }
        }
        printf("%d\n", flag);
        if(flag == 0)
        {
            printf("%d is a prime number!!\n",b);
        }
        else
        {
            printf("%d is not a prime number!!\n",b);
        }
    }
}
