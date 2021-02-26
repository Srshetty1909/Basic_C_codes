#include<stdio.h>
void sumodigi(int n);
int main()
{
    int n, m;
    printf("Input number:");
    scanf("%d",&n);
    sumodigi(n);
    return 0;
}
void sumodigi(int n)
{
    int sum;
    sum = 0;
    while(n > 0)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    printf("Sum of digits: %d\n",sum);
}
