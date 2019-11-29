#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* single array */
    int i;
    int marks[10]={20,30,40,50,60,90,20,80,90,50};
    for (i=0;i<10;i++)
    {
        printf("Print marks %d= %d\n",i,marks[i]);
    }
    return 0;
}
