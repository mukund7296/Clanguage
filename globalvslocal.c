#include<stdio.h>
int value=20;//global variable  

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


    void function1(){  
    int x=10;//local variable  
    static int y=10;//static variable  
    auto int y=20;//automatic variable  

    x=x+1;  
    y=y+1;  
    printf("%d,%d",x,y);  
    }  