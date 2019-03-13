

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int digit,n,NumberOfDigits,reversen,newdigit;
    
    printf("Enter an Integer:");
    scanf("%d",&n);
    reversen = 0;

    NumberOfDigits = log10(n)+1;
    printf("Total number of digits : %d\n",NumberOfDigits);

    for(int i = 0; i <NumberOfDigits; i++)
    {
        digit = (int)(n /(pow(10,i))) % 10 ;
        newdigit = digit * pow(10,abs(NumberOfDigits-i-1));
        reversen += newdigit;
        printf("Current reverse number is %d and digit = %d\n",reversen,digit);
    }
    printf("So the reverse of the given number is %d\n\n",reversen);
    printf("End of Program");
    return 0;
}