#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers to be swapped:");
    scanf("%d%d",&a,&b);
    printf("The varialbles are:\n a= %d\n b=%d\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("The varialbles after swapping are:\n a= %d\n b=%d\n", a, b);
    return 0;
}
