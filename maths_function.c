//This is the line causing issue in the master branch
//This is the line causing issue in the conflict branch
#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   float divide;
 
   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   //typecasting
 
   printf("Sum = %d\n",add);
   printf("Difference = %d\n",subtract);
   printf("Multiplication = %d\n",multiply);
   printf("Division = %.2f\n",divide);
   
   int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("Enter divisor: ");
    scanf("%d",&divisor);
    quotient=dividend/divisor;           /*  Computes quotient */
    remainder=dividend%divisor;          /* Computes remainder */
    printf("Quotient = %d\n",quotient);
    printf("Remainder = %d\n",remainder);
 
   return 0;
}
