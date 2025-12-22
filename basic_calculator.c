#include<stdio.h>
#include<math.h>
int main(){
    double num1, num2;
    double result;
    char operation = {'-','*','+','/'};

     
    printf("A SIMPLE BASIC CALCULATOR: \n");

    printf("ENTER THE FIRST NUMBER: ");
    scanf("%lf", &num1);

    printf("Enter an operation to be used: ");
    scanf("%c", &operation);

    printf("ENTER THE SECOND NUMBER: ");
    scanf("%lf", &num2);
     
     
    if (operation == '+')
    {
     result = num1 + num2;
     printf("SUM = %.3lf", result);
     }
    
         
    if (operation == '-')
    {
     result = num1 - num2;
     printf("DIFFERENCE = %.3lf", result);
     }

      if (operation == '*')
    {
     result = num1 * num2;
     printf("PRODUCT = %.3lf", result);
     }
       if (operation == '/')
    {
     result = num1 / num2;
     printf("DIVISION = %.3lf", result);
     }

     else{
        printf("\n ERROR, ENTER THE RIGHT VALUE");
     }

    return 0;
}
