#include <stdio.h>
// program to find LCM
int main()
{
    int No1 = 0, No2 = 0;
    int LCM = 0;

    printf("Enter Two Numbers:\n");
    scanf("%d %d", &No1, &No2);

    for (int i = 1;; i++)
    {
        if (i % No1 == 0 && i % No2 == 0)
        {
            printf("LCM is : %d\t", i);
            break;
        }
    }

    return 0;
}