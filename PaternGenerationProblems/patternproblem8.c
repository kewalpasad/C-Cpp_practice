/*
Generate the pattern
                    i   j   s
.....*          //  1   5   1
....***         //  2   4   3
...*****        //  3   3   5
..*******       //  4   2   7
.*********      //  5   1   9
***********     //  6   0   11
.*********      //  7   1   9
..*******       //  8   2   7
...*****        //  9   3   5
....***         //  10  4   3  
.....*          //  11  5   1

*/

//h = n/2+1, j = absolute (h-i) 
//if i>h then n-(j*2) else (2i-1)

#include<stdio.h>
#include<stdlib.h>

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
            s = n-(abs(h-i)*2); 
        }
        else {
            s = 2*i-1;
        }
                
        for(int j = 0; j < abs(h-i); j++)
        {
            printf(".");
        }

        for(int star = 0; star < s; star++)
        {
            printf("*");
        }
        

        printf("\n");        
    }
    
    
    return 0;
}
