#include <stdio.h>
#include <math.h>

float fact(int);

int main()
{
    int x, n;
    float result = 0.0;

    printf("Enter X => ");
    scanf("%d", &x);
    
    printf("Enter N => ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        result += (double) pow(x,i) / fact(i);
    }

    printf("Result => %.2f ", result);

    return 0;
}

float fact(int num) 
{
   int result = 1;
   
   for(int i=1; i<=num; i++)
   {
       result = result * i;
   }

   return result; 
}

