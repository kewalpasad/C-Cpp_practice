//sum = 1 - 2 + 3 - 4 + 5 - 6 ......n terms
//place 1   2   3   4   5   6 ......n places
//
//

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int place,term,sum,i;

    sum = 0;
    printf("Please Enter the number of term: ");
    scanf("%d",&term);

    for (place = 1;place <= term; place++)
    {
        sum = sum - pow(-1,place)*place;
        i = 0-(pow(-1,place)*place);
        printf("current i = %d term = %d and sum = %d\n",place,(int)i,(int) sum);
    }
    printf("So the final sum is %d",sum);
    return 0;
}
