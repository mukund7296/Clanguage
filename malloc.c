#include <stdio.h>
int main()
{
    float n[5] = { 20.4, 30.0, 5.8, 67, 15.2 }; /* declaring n as an array of 5 floats */
    float *p; /* p as a pointer to float */
    int i;
    p = n; /* p now points to array n */
    /* printing the values of elements of array */
    for (i = 0; i < 5; i++ )
    {
        printf("*(p + %d) = %f\n", i, *(p + i) );/* *(p+i) means value at (p+0),(p+1)...*/
    }
    return 0;
}