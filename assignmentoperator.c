#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */

    int a=10,b=5,c;
    c=a+b;
    printf("A=%d : B=%d C=%d\n",a,b,c);
    c+=a;
    printf("A=%d : B=%d C=%d\n",a,b,c);
    c-=a;
    printf("A=%d : B=%d C=%d\n",a,b,c);
    c*=a;
    printf("A=%d : B=%d C=%d\n",a,b,c);
    c/=a;
    printf("A=%d : B=%d C=%d\n",a,b,c);
    c%=a;
    printf("A=%d : B=%d C=%d\n",a,b,c);
    return 0;
}
