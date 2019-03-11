//          col
//          0   1   2   3

//  R 0     0   1   2   3

//  O 1     1   1   2   3

//  W 2     2   2   2   3

//  S 3     3   3   3   3
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
            a[row][col]=(row>col)?row:col;
                       
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
