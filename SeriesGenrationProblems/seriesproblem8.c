//sum = 1! + 3! + 5! + 7! + ...n terms
//place=1    2    3    4 ... n terms
//fact = fact * (2*place) * (2*place+1)
//sum = sum + fact

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int term,sum,place,fact;

    printf("Please Enter number of terms:");
    scanf("%d",&term);

    fact = 1;
    sum = 0;

    for(place = 1;place<=term;place++)
    {
        sum = sum + fact;
        printf("current i = %d fact = %d and sum = %d\n",place,fact,sum);
        fact = fact * (2*place+1) * (2*place); 
    }

    printf("So the sum is %d",sum);
    return 0;
}
