/*
Generate the pattern
                    i   j   s
***********     //  1   0   11
.*********      //  2   1   9
..*******       //  3   2   7
...*****        //  4   3   5
....***         //  5   4   3  
.....*          //  6   5   1
....***         //  7   4   3
...*****        //  8   3   5
..*******       //  9   2   7
.*********      //  10  1   9
***********     //  11  0   11

*/

// i>h then n-i else j = i-1
// i>h then s= i-j else  s = n - j*2

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter the number of layers :");
    scanf("%d",&n);
    int h = n/2+1;
    int s,j;

    for(int i = 1; i <= n; i++)
    {
        if (i>h) 
        {
            j = n-i;
            s = i-j;
        }
        else {
            j = i-1;
            s = n-j*2;
        }
                
        for(int dot = 0; dot < j; dot++)
        {
            printf(".");
        }

        for(int star = 1; star <= s; star++)
        {
            printf("*");
        }
        

        printf("\n");        
    }
    
    
    return 0;
}
