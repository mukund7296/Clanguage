#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
      int a,i;
    printf("Ente your table Number= ");
    scanf("%d",&a);
    printf("Your table is start");

    for (i=1; i<11; i++)
    {
        printf("%d X %d =%d\n",a,i,a*i);
    }
    return 0;
}
