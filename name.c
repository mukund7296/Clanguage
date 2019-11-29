    #include <stdio.h>
    int main()
    {
        char name[20],address[30],lname[20];
        
        printf("Enter first name: ");
        scanf("%s", name);
         printf("Enter Last name: ");
        scanf("%s", lname);
        printf("\nEnter Address: ");
        scanf("%s", address);

        printf("Your Full name is %s %s\n Address is %s. \n", name,lname,address);
        return 0;
    }