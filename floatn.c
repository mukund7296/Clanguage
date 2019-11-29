#include<stdio.h>

int main(int argc, char const *argv[])
{
 
  int a ,b,c,d;
  printf("Please enter your values...!!!\n");
  printf("Enter your A values: \t");
  scanf("%d",&a);
  printf("Enter your B values: \t");
  scanf("%d",&b);

  printf("Enter your C values: \t");
  scanf("%d",&c);
  printf("Enter your D values: \t");
  scanf("%d",&d);
  if (b>= a & b>=c & b>=d) {  
    printf("B is greater...! \n");
  }
  else if (a>= b & a>=c & a>=d)
  {
      printf("A is greater..!!\n");
  }
   else if (c>= b & c>=a & c>=d)
  {
      printf("C is greater..!!\n");
  }
   else
  {
      printf("D is greater..!!");
  }
  return 0;
}