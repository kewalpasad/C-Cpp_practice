//Finding Digital Root of a Number in C
//1251 => 1+2+5+1 => 9
//7689 => 7+6+8+9 => 30 => 3+0 => 3
//199  => 1+9+9   => 19 => 10  => 1

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,digit,sum;

    printf("Enter the number: ");
    scanf("%d",&n);
    sum = 15;

    while (sum>9)
    {
        sum = 0;

        while(n>0)
        {
            digit = n % 10;
                n = n/10;
                sum=sum+digit;
                //printf("Current Value in d = %d reduced n = %d and sum = %d\n",digit,n,sum);
        }
        n = sum;
    }

    printf("The digital root of the given number is %d",sum);    
    return 0;
}
