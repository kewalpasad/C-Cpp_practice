//Sum of Digits of Number in C

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,digit;
    int sum = 0;
    printf("Enter an Integer:");
    scanf("%d",&n);
    
    do
    {
        digit = n % 10;
        n = n/10;
        sum=sum+digit;
        printf("Current Value in d = %d reduced n = %d and sum = %d\n",digit,n,sum);
    } while (n>0);

    printf("So the sum of all the digits is %d\n\n\n",sum);

    printf("End of Program");
    return 0;
}
