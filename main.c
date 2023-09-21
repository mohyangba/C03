#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    int  i;
    printf("input a number : ");
    scanf("%c", &c);
    
    i= c - '0';
    printf("The input number ASCII is %i\n", c);
    printf("We will subtract 48 from the input number\n");
    printf("The resault will be %i\n", i);
    
    system("PAUSE");
    return 0;
}
