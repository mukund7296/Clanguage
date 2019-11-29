# include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int i,a;
    printf("Enter you number :-");
    scanf("%d",&a);
    for (i = 0; i < a; i++)
    {
        if (i%2==1)
        {
            printf("ood numbers are :- %d\n",i);
        }
        
    }
    
    return 0;
}
