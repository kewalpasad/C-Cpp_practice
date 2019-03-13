//Finding Krishnamurthy Numbers in C

#include<stdio.h>

int main(int argc, char const *argv[])
{
    for(int num = 1;num<=1000;num++)
    {
        int i = num;
        int sum = 0;
        

        while(i>0)
        {
            int digit = i%10;
            i=i/10;
            int fact = 1;

            for(int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }
            sum = sum + fact;
        }
        if (sum==num) {
            printf("%d is a Krishnamurthy number\n",sum);
        }
        
        
    }

    return 0;
}
