//          col
//          0   1   2   3

//  R 0     1   5   9   13

//  O 1     2   6   10  14

//  W 2     3   7   11  15

//  S 3     4   8   12  16
//
//
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[4][4],row,col;

    for(row=0;row<4;row++)
    {
        for(col=0;col<4;col++)
        {
            a[row][col]=(col*4+1)+row;
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
