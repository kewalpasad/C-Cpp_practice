//Array filling of a Magic square
//row wise sum , Col wise sum and diagonal sum should be equal to eachother.

#include<stdio.h>

int a[20][20];

int main(int argc, char const *argv[])
{
    int n,row,col,count;
    printf("Enter the odd dimention of matrix:");
    scanf("%d",&n);

    col = (n+1)/2;
    row = 1;
    count = 1;
    while(count<=n*n){

        if (row<1 && col>n ) {
            row = row+2;
            col = col-1;
        }
        
        if (row<1) {
            row = n;
        }
        if (col>n) {
            col = 1;
        }
        if (a[row][col]!= 0) {
            row = row+2;
            col-=1;
        }
        
        a[row][col] = count;
        col+=1;
        row-=1;
        count++; 

               
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
