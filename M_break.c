/**
 * C program to print even numbers between 1 to 100
 */
#include <stdio.h>

int main()
{
    /* Variable declaration */
    int num;

    printf("Even numbers between 1 to 100: \n");

    for(num=1; num<=100; num++)
    {
        /*
         * If num is odd then
         * skip rest loop body and
         * continue to next iteration
         */
        if(num % 2 == 1)
            continue;
        else if (num==10)
        {
            printf("\nBaba Baba Baba\n");
            continue;
        }

        
        else if (num==50)
        {
            printf("\nCOngraturlations Brother %d\n",num);
            break;
        }
        
        {
            
        }
        

        /* Print even number */
        printf("%d ", num);
    }

    return 0;
}