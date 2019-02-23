//sum = 2! + 4! + 6! + 8! + .... n terms
//place 1    2    3    4     ....n terms
//fact = fact * (2 * place-1) * (2 * place)
//sum = sum + fact

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int term,sum,place,i,fact;

    printf("Please Enter number of terms:");
    scanf("%d",&term);
    sum = 0;
    fact = 1;
    for( place = 1; place <= term; place++)
    {
        fact = fact*(2*place-1)*(2*place);
        sum = sum + fact;
        printf("current i = %d term = %d and sum =%d\n",place,fact,sum);
    }
    printf("So the sum is %d",sum);
    return 0;
}
