/*
Generate the pattern
*
**
***
****
*****
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number of layers :");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");        
    }
    
    
    return 0;
}
