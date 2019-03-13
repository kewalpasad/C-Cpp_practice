//Sum of Digits of Number in C

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int digit,n,NumberOfDigits;
    int sum = 0;
    printf("Enter an Integer:");
    scanf("%d",&n);

    NumberOfDigits = log10(n)+1;
    printf("Total number of digits : %d\n",NumberOfDigits);

    for(int i = 0; i <NumberOfDigits; i++)
    {
        digit = (int)(n /(pow(10,i))) % 10 ;
        sum = sum + digit;
        printf("Current digit is %d and sum = %d\n",digit,sum);
    }
    printf("So the sum of all digits of %s is %d\n\n",n,sum);
    printf("End of Program");
    return 0;
}
