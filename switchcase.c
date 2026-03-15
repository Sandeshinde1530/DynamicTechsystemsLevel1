#include <stdio.h>

int main()
{
    int Standard;

    printf("Enter Standard:");
    scanf("%d", &Standard);

    switch (Standard)
    {
    case 1:
        printf("Your exam is at 8 am\n");
        break;
    case 2:
        printf("Your exam is at 9am\n");
        break;
    case 3:
        printf("Your exam is at 10am\n");
        break;
    case 4:
        printf("Your exam is at 11 am\n");
        break;
    default:
        printf("You have entered wrong standard  enter in 1st to 4th\n");
    }

    return 0;
}

// 1 = 8am
// 2 = 9
// 3 = 10
// 4 = 11