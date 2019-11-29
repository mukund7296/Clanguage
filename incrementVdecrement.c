#include <stdio.h>
//stdio.h is a header file used for input.output purpose.

void main()
{
    //set a and b both equal to 5.
    int a=5, b=9;
    int c=1,d=5;
    
    //Print them and decrementing each time.
    //Use postfix mode for a and prefix mode for b.
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
printf("Increment \n");
    printf("\n%d %d",c++,++d);
     printf("\n%d %d",c++,++d);
      printf("\n%d %d",c++,++d);
       printf("\n%d %d",c++,++d);
        printf("\n%d %d",c++,++d);
        printf("ENd \n");
}