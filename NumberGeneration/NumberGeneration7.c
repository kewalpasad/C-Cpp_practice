//Finding Armstrong Numbers in C
//371 = 3^3 + 7^3 + 1^3 = 371
//1 = 1^1 =1

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    for(int num = 1;num<=1000;num++)
    {
        int i = num;
        int sum = 0;
        int NumberOfDigits = log10(num)+1;

        while(i>0)
        {
            int digit = i%10;
            i = i/10;
            sum = sum + (pow(digit,NumberOfDigits));
        }
        if (sum==num) {
            printf("%d is Armstrong number\n",num);
        }
                
    }
    return 0;
}
