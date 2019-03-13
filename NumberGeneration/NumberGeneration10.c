//Checking Prime Number in C

#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num,squareRoot,Q;

    printf("Enter an Integer:");
    scanf("%d",&num);
    printf("\n\n");
    squareRoot = (int) (sqrt(num));
    int count = 0;

    for(int i = 2; i <=squareRoot ; i++)
    {
        if (num%i == 0) 
        {
            count++;     
            
        }
        
    }
    if (count>0) {
        printf("%d is not a prime number",num);
    }
    else {
        printf("%d is a prime number",num);
    }
    
    
    return 0;
}
