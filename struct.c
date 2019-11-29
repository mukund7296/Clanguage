#include<stdio.h>
struct Person
{
    /* structure */
    int cityno;
    char Name[20];
    char LName[20];
    float salary;

};

int main(int argc, char const *argv[])
{
    /* call structure here */
    struct Person Per[5];
    int i;
    for(i=0; i<4; i++)
    {
        //User input from console
      printf("Student %d\n",i+1);
      printf("Enter Emp ID. :");
      scanf("%d", &Per[i].cityno);
      printf("Enter First name :");
      scanf("%s",Per[i].Name);
      printf("Enter Last name :");
      scanf("%s",Per[i].LName);
      printf("Enter Salary Dollar :");
      scanf("%f", &Per[i].salary);
    }
    for (int i = 0; i < 4; i++)

    {
        /* Display result */
        printf("Person %d\n",i+1);
        printf("Person City %d\t First Name:Mr/Mrs %s\t Last Name: %s\t Salary : [%.2f]$\n",Per[i].cityno,Per[i].Name,Per[i].LName,Per[i].salary);

    }
    

    return 0;
}
