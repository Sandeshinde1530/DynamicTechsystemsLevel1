#include <stdio.h>

int main()
{
    int Standard;

    printf("Enter Standard:");
    scanf("%d", &Standard);

    switch (Standard)
    {
    case 12:
        printf("Your exam is at a 10 am\n");
        break;
    case 11:
        printf("Your exam is at 9am\n");
        break;
    case 10:
        printf("Your exam is at 8 am\n");
        break;
    default:
        printf("You have entered wrong standard  enter in 10th  to 12th\n");
    }

    return 0;
}

// 1 = 8am
// 2 = 9
// 3 = 10
// 4 = 11