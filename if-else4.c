#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Able to vote\n");
    }
    else
    {
        printf("Unable to vote\n");
    }

    // if (age < 18)
    // {
    //     printf("Unable to Vote\n");
    // }
    // else
    // {
    //     printf("Able to vote\n");
    // }

    return 0;
}