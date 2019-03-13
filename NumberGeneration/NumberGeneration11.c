


#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num,squareRoot,Q;

    for(num = 6;num<=6;num++)
    {

        squareRoot = (int) (sqrt(num));
        int sum = 0;

        for(int i = 1; i <=squareRoot ; i++)
        {
            if (num%i == 0) 
            {
                if (i ==squareRoot||i == 1) 
                {
                    sum = sum+i;
                }
                else 
                {
                    Q = num/i;
                    sum = sum + Q + i;                    
                }
                
                
            }
            
        }
        if (sum == num) {
            printf("%d is a perfect number",num);
        }
        
    
    }
    return 0;
}
