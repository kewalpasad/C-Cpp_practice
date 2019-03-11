//          col
//          0   1   2   3   4

//  R 0     10  0   0   0   20

//  O 1     0   10  0  20   0   

//  W 2     0   0   30  0   0

//  S 3     0   20   0  10  0

//    4     20  0   0   0   10
//
#include<stdio.h>
int a[5][5];

int main(int argc, char const *argv[])
{
    int row,col;

    for(row=0;row<5;row++)
    {
        for(col=0;col<5;col++)
        {
            if (row == col) {
                a[row][col]+=10;
            }
            if (row+col == 4) {
                a[row][col]+=20;
            }
            
                        
        }
    }
    for(row=0;row<5;row++)
    {
        for(col=0;col<5;col++)
        {
           printf("%d\t",a[row][col]);
        }
        printf("\n");
    }

    return 0;
}
