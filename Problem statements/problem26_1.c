#include <stdio.h>

int main()
{
    int start = 0, End = 0, i = 0;

    printf("Enter the starting and ending point :\n");
    scanf("%d  %d", &start, &End);

    if (start > End)
    {
        printf("Enter a valid range");
    }

    for (i = start; i <= End; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}