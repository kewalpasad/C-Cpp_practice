//sum =  4 + 7 + 4 + 7 + 4 + 7 ...n terms
//place= 1   2   3   4   5   6 ...n terms

//if place is even then 7 else 4  //even odd method

//if i == 4 then i=7 else i=4  //toggle between 4 and 7

//i=11 , i-i that is 11-7 = 4, 11-4 = 7

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int term,sum,place,i;

    printf("Please Enter number of terms:");
    scanf("%d",&term);

    sum = 0;

    for(place = 1;place<=term;place++)
    {
        if (place%2==0) {
            i = 7;
        }
        else {
            i = 4;
        }
        sum = sum + i;
        printf("current i = %d term = %d and sum = %d\n",place,i,sum);

    }

    printf("So the sum is %d",sum);
    return 0;
}
