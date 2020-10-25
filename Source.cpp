#include <stdio.h>  

int main(void) {

    int n;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10 - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= 10 - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}