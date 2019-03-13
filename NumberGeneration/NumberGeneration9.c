//Finding Factors of a Number in C

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num,squareRoot,Q;

    printf("Enter an Integer:");
    scanf("%d",&num);
    printf("\n\n");
    squareRoot = (int) (sqrt(num));

    for(int i = 1; i <=squareRoot ; i++)
    {
        if (num%i == 0) {
            if (i ==squareRoot) {
                printf("%d is a factor\n",i);
            }
            else {
                Q = num/i;
                printf("%d and %d are factors\n",i,Q);
            }
            
        }
        
    }
    
    return 0;
}
