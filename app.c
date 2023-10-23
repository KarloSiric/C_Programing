#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("Hello World!\n");
    

    int a = 10;
    char b = 'a';
    float c = 12.3;
    double d = 12.3;
    printf("a=%d, b=%c, c=%f, d=%lf\n",a,b,c,d);

    int e = 10;

    int sum = 0;

    for (int i = 0; i < 101; i++)
    {
        sum += i;
    }
    
    printf("sum = %d\n", sum);
    printf("sum = %d\n", sum);

    // Write a True value
    if (1 == 1)
    {
        printf("True\n");
    }

    // Write a False value
    if (1 == 1)
    {
        printf("False\n");
    }

    // Write a True value
    if (1 == 1)
    {
        printf("True\n");

    }
    else
    {
        printf("False\n");
    }   

}