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


int maximum=0,minimum=1,number,sum=0;
int count=0;
float average;


while(1)
{
cout<<"Enter a number(-1 to quit): "; cin>>number;    

if(number==-1)
    break;  // enough asking for numbers
    
else if(number<1 || number>100)
    {cout<<"\nOut of range.Enter between 1-100.\n";continue;} //invalid input,do again


maximum=(number>maximum)?number:maximum; //conditional statement,
                                        //if entered number is greater than our max,its new max

minimum=(number<minimum)?number:minimum;//condiitonal statement,
                                        //if entered number is smaller than our min,its new min
sum+=number; //add to sum    
count++;     // increment count
}

average=float(sum)/float(count);

cout<<"\nYou entered " << count << " numbers."<<endl
    <<"Their average is : "<<average<<endl
    <<"Max number is : "<<maximum<<endl
    <<"Min number is : "<<minimum;  
return 0;
 
   return 0;
}
