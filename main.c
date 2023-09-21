#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int forint;
    float forfloat;
    
    printf("enter an integer : ");
    scanf("%d", &forint);
    
    printf("enter a float : ");
    scanf("%f", &forfloat);
    
    printf("interger : %d, float : %f\n", forint, forfloat);
    
    system("PAUSE");
    return 0;
}
