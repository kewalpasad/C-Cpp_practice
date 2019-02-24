/*
Generate the pattern
*           //  1
**          //  2
***         //  3
****        //  4
*****       //  5
******      //  6
*****       //  7
****        //  8
***         //  9
**          //  10  
*           //  11

*/

//if i > n/2+1 then starCount = 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number of layers :");
    scanf("%d",&n);
    int h = n/2+1;
    int s;

    for(int i = 0; i <= n; i++)
    {
        if (i>h) 
        {
            s = n-i+1; 
        }
        else {
            s = i;
        }
                
        for(int j = 0; j <s; j++)
        {
            printf("*");
        }

        printf("\n");        
    }
    
    
    return 0;
}
