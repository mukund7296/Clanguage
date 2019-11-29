#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int a,i;
    printf("enter your start loop number:-");
    scanf("%d",&i);

    printf("enter your end loop number:-");
    scanf("%d",&a);
  for (int i=1 ; i < a; i++)
  {
      printf("Employee ID:EMP-0%d\n",i);
    
  }
 
  
    return 0;
}
