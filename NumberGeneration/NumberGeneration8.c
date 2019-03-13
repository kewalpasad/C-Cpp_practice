//Generating Palindrome Numbers in C



#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int digit,n,NumberOfDigits,reversen;

    for( n = 100; n < 1000; n++)
    {
        int i = n;
        reversen = 0;
        
        while(i>0)
        {
            digit = i%10;
            i = i/10;
            reversen = reversen*10+digit;
        }
        if (n==reversen) {
            printf("%d is a palindrome number\n",n);
        }
        
        
    }
    
    
    
    printf("End of Program");
    return 0;
}