/*
Generate the pattern
....a       //  4   1
...bbb      //  3   3
..ccccc     //  2   5
.ddddddd    //  1   7
eeeeeeeee   //  0   9
*/

//char alpha = 'a' then alpha++

//%c = i+96

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
        for(int s = (2*i-1); s > 0; s--)
        {
            printf("%c",i+96);
        }
        printf("\n");        
    }
    
    
    return 0;
}
