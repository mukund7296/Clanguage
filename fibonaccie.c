#include<stdio.h>

int fibo(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibo(n-1) + fibo(n-2));
}

int main()
{
    /* code */
      int n, i = 0, c;
  printf("Fibonacci Enter:\n");
  scanf("%d", &n);

  printf("Fibonacci series terms are:\n");

  for (c = 1; c <= n; c++)
  {
    printf("%d\n", fibo(i));
    i++;
  }

  return 0;
}
