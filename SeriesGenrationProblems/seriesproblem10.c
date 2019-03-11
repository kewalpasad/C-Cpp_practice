//sum =  1 + 2 + 3 + 4 + 10 + 5 + 6 + 7 + 8 + 26 + 9....n terms
//place= 1   2   3   4   5    6   7   8   9   10  11....n terms

//modulo 5 = 0 then add


#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int term,sum,place,i,j,total;

    printf("Please Enter number of terms:");
    scanf("%d",&term);
    sum = 0;
    total = 0;
    j = 0;

    for(place = 1;place<=term;place++)
    {
        if (place%5==0) {
            i = sum;
            //total = total + sum;
            sum = 0;
        }
        else {
            j++;
            i = j;
            sum = sum + j;
            
        }
        total = total + i;
        printf("current i = %d term = %d\n",place,i);
        

    }
    printf("Adding %d terms\n",j);
    printf("So the sum is %d",total);
    return 0;
}
