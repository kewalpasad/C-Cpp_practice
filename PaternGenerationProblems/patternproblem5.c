/*
Generate the pattern
....*       //  4   1
...* *      //  3   2
..* * *     //  2   3
.* * * *    //  1   4
* * * * *   //  0   5
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number of layers :");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j>0; j--)
        {
            printf(".");
        }
        for(int s = 1; s <= i; s++)
        {
            printf("* ");
        }
        printf("\n");        
    }
    
    
    return 0;
}
