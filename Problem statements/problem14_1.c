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
        int flag = 1;
        for (int j = 2; j < i / 2; j++)
        {

            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}