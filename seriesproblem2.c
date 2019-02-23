#include<stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    int term;
    int i = 2;

    printf("Please Enter The Number Of Terms:");
    scanf("%d",&term);

    for (int place = 1;place <= term;place++)
    {
        sum+=i;
        printf("current place = %d i = %d and sum = %d\n",place,i,sum);
        i+=2;
        
    }

    printf("So the final sum is %d",sum);
    return 0;
}