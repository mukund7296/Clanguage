#include<stdio.h>
int main()
{
    /* code */
    int CNY,Dollar,Rupees,q;
    printf("\n");
    printf("1.CNY to Rupees & Dollar.\n");
    printf("2.Dollar to CNY & Rupees..\n");
    printf("3.Rupee to Dollars & CNY\n");
    printf("4. exit \n");
    printf("Enter your option= ");
    scanf("%d",&q);

    switch (q)
    {
    case 1:
        printf("Enter you CNY currency = ");
        scanf("%d",&CNY);
        printf("CNY %d CNY \n USD =%.2f USD \nRupees=%d Rupees.\n",CNY,CNY*0.07,CNY*10);
        break;
    case 2:
        printf("Enter you USD currency = ");
        scanf("%d",&Dollar);
        printf("USD %d USD \n CNY =%f \n Rupees=%d\n",Dollar,Dollar*7.1,Dollar*70);
        break;
     case 3:
        printf("Enter you Rupee currency = ");
        scanf("%d",&Rupees);
        printf("Rupee %d \n USD =%.2f usd \n CNY=%.2f CNY\n",Rupees,Rupees*0.720,Rupees*0.10);
        break;
    default:
         printf("Thanks for using currency !\n");
        break;
    }

    return 0;
}
