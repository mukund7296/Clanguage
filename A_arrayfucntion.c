    #include <stdio.h>
    void display(int age1, int age2)
    {
        printf("your age is %d\n", age1);
        printf("your age is %d\n", age2);
    }
    int main()
    {
        int ageArray[] = {2, 8, 4, 12};
        // Passing second and third elements to display()
        display(ageArray[1], ageArray[2]); 
        return 0;
    }