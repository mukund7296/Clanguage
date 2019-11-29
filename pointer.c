#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    char a='3';
    char* ptra=&a;
    printf("%d\n",ptra);
    //printf("%d\n",&a);
    ptra++;
    printf("%d\n",ptra);
    
    printf("%d\n",&ptra-2);

    ptra--;
    printf("%d\n",&ptra);
    return 0;
}
