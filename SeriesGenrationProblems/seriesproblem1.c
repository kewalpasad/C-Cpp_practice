#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    int a;

    printf("Please enter the number of term:");
    scanf("%d",&a);

    for(int i = 1; i < a; i++)
    {
        sum+=i;
        printf("current i = %d and sum = %d\n",i,sum);
    }

    printf("So the final sum is %d",sum);
        return 0;
}


