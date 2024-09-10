# include<stdio.h>

int main()

{
    int marks;
    printf("enter number:");
    scanf("%d",&marks);
    if(marks>30 && marks<=100 )
    printf("student is pass\n");
    else if(marks<=30 && marks>=0)
    printf("student is fail");
    else
    printf("wrong input");

    return 0;
}