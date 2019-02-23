//sum =   1 + 3 + 5 + 7 +....n terms
//place = 1   2   3   4......n terms
//i =(place*2)-1
//sum = sum + i
//





#include<stdio.h>

int main(int argc, char const *argv[])
{

    int sum = 0;
    int term;
    
    printf("Please Enter the number of terms:");
    scanf("%d",&term);

    for(int place = 1; place <= term; place++)
    {
        sum+=place*2-1;
        printf("place = %d i = %d sum = %d\n",place,place*2-1,sum);
    }

    printf("The final sum is %d",sum);
    
   
    return 0;
}
