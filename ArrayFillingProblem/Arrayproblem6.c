//Array filling in a spiral order




#include<stdio.h>

int a[20][20];

int main(int argc, char const *argv[])
{
    int n,row,col,rd,cd,td,trow,tcol;
    printf("Enter the odd dimention of matrix:");
    scanf("%d",&n);

    col = 1;
    row = 1;
    rd = 0;
    cd = 1;

    for(int i = 1; i <= n*n; i++)
    {
        a[row][col] = i;
        trow = row + rd;
        tcol = col + cd;

        if (trow>n||tcol>n||tcol<1||a[trow][tcol]!=0) 
        {
            td = rd;
            rd = cd;
            cd = 0 - td;              
        }
        row = row + rd;
        col = col + cd;
        
        
        
    }
    
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
           printf("%d\t",a[row][col]);
        }
        printf("\n");
    }

    return 0;
}
