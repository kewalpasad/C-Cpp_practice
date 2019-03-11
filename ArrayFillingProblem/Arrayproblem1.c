#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[4][4],row,col;

    for(row=0;row<4;row++)
    {
        for(col=0;col<4;col++)
        {
            a[row][col]=(row*4+1)+col;
        }
    }
    for(row=0;row<4;row++)
    {
        for(col=0;col<4;col++)
        {
           printf("%d\t",a[row][col]);
        }
        printf("\n");
    }

    return 0;
}
