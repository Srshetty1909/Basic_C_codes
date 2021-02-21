#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if((marks<40)&&(marks>=0))
    {
        grade = 'F';
    }
    else if((marks>=40)&&(marks<=54))
    {
        grade = 'D';
    }
    else if((marks>=55)&&(marks<=69))
    {
        grade = 'C';
    }
    else if((marks>=70)&&(marks<=84))
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }
    printf("Grade %c\n",grade);
    return 0;
}
