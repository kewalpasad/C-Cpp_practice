//sum = 1! + 2! + 3! + 4! + 5! + 6!....nterms
//place 1    2    3    4    5    6...nterms
//
//

#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    int term,sum,place,fact;

    printf("Please Enter number of terms:");
    scanf("%d",&term);

    sum = 0;
    fact = 1;

    for(place = 1;place<=term;place++)
    {
        fact = fact*place;
        sum = sum + fact;
        printf("place = %d term = %d sum = %d\n",place,fact,sum);

    }

    printf("So the sum is %d",sum);
    return 0;
}

