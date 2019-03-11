/*
Generate the pattern
....*       //  4   1
...***      //  3   3
..*****     //  2   5
.*******    //  1   7
*********   //  0   9
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number of layers :");
    scanf("%d",&n);
    int s = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j>0; j--)
        {
            printf(".");
        }
        for(int s = (2*i-1); s > 0; s--)
        {
            printf("*");
        }
        printf("\n");        
    }
    
    
    return 0;
}
