#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n = 0;
    int *rollNo  = NULL;


    //part1 Memory allocation

    printf("Enter How Many Students ");
    scanf("%d",&n);

   rollNo = (int*) malloc(n*sizeof(int));
   printf("%d",rollNo); 

    if(rollNo == NULL)
    {
        printf("Memory allocation failed\n");
    }

   printf("Enter %d roll numbers:\n",n);

   for(int i = 0 ; i < n; i++)
   {
    scanf("%d",&rollNo[i]);
   }

   printf("Entered roll numbers are:\n");
   for(int i = 0 ; i < n; i++)
   {
    printf("%d\t",rollNo[i]);
   }

   printf("\n=======================wait we have 2 More students================\n");
   // Part 2 memory reallocation

   int newtotal = n + 2;

   rollNo = (int * )realloc(rollNo ,newtotal * sizeof(int));

   printf("%d",rollNo);

   printf("Enter Roll No for 2 more studnets\n");
   for(int i = n ; i < newtotal ; i++)
   {
    scanf("%d",&rollNo[i]);
   }


    printf("Entered roll numbers are:\n");
   for(int i = 0 ; i < newtotal; i++)
   {
    printf("%d\t",rollNo[i]);
   }







    return 0;
}