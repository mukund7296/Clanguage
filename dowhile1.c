#include<stdio.h>
int main()
{
    int j=0;
    printf("Size of j is %d\n",sizeof(j));
    do
    {
        printf("Value of the variable j is: %d\n", j);
        j++;
    }while (j<=5);
    return 0;
}