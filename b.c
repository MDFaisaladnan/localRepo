# include<stdio.h>

int main()

{
    char character;
    printf("enter the character:");
    scanf("%c",&character);
    if(character>='A' && character<='Z')
    printf("uppercase\n");
    else
    printf("not an uppercase\n");

    return 0;
}