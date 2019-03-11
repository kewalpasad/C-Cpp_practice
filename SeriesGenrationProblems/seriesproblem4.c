//sum = -1+2-3+4-5+6....nterms
//place  1  2  3  4  5  6.... terms
//place if even then + else -


#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    int term;
    int i;

    printf("Please Enter the number of term");
    scanf("%d",&term);

    for(int place = 1; place <= term; place++)
    {
       sum = sum+(pow(-1,place)*place);
        
        printf("curent i = %d term = %d and sum = %d\n",place,(int) (pow(-1,place)*place),sum);
        
    }

    printf("The total sum is %d",sum);
    
    return 0;
}
