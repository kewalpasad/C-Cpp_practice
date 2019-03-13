//Generations of Fibonacci Numbers in C


#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int fib = 0;
    int n1 = 0;
    int n2 = 1;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("\n%d",n1);
    printf("\n%d\n",n2);

    for(int i = 0; i < n-2; i++)
    {
        fib = n1 + n2;
        printf("%d\n",fib);
        n1 = n2;
        n2 = fib;
    }
    
    
    return 0;
}
