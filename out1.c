#include <stdlib.h>

int r = 0;

int fib (int n) {
    printf("k: %d fib n: %d", r++, n);
    if (n==0 || n==1) {
        printf("\n");
        return 1;
    } else { 
        printf(" +\n");
        return fib(n-1) + fib(n-2); 
    }
}

int main(int argc, char **argv) {
    int n = atoi(argv[1]);
    int f = fib(n);
    printf("\nreturn: %d\n", f);
    return 0;
}