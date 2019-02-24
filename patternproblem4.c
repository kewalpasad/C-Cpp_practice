/*
Generate the pattern
*********   //  0   9
.*******    //  1   7
..*****     //  2   5
...***      //  3   3
....*       //  4   1

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number of layers :");
    scanf("%d",&n);
    int s = 1;

    for(int i = n; i > 0; i--)
    {
        for(int j=0 ; j<n-i; j++)
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
