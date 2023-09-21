#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1;
    int num2;

    
    printf("enter a number : ");
    scanf("%i", &num1);
    
    printf("  this will be called num1\n");
    printf("\n");
    
    printf("enter a number that will devide num1 : ");
    scanf("%i", &num2);
    
    float i;
    i = num1/num2;
    
    printf("The resault will be %f", i);
    printf("\n");
    
    system("PAUSE");
    return 0;
}
