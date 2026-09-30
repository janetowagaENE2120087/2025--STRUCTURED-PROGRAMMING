#include <stdio.h>
int main ()
{
char op;
double num1,num2,result;
printf("Hello and welcome to JJ's calculator that will help you perform your operations.Please enter operation (+,-,*./):");
scanf("%c",&op);

printf("Enter first number:");
scanf("%lf",&num1);

printf("Enter second number:");
scanf("%lf",&num2);
switch (op) {
case '+' :
    result=num1 + num2;
    printf("Result : %.2lf\n",result);
    break;
case '-' :
    result=num1 - num2;
    printf("Result : %.2lf\n",result);
    break;
case '*' :
    result=num1 *num2;
    printf("Result : %.2lf\n",result);
    break;
case '/':
    if (num2==0){
        printf("Error:Division by zero is not allowes.\n");
    } else {
    result =num1/num2;
    printf("Result: %.2lf\n",result);
    }
    break;
default:
    printf("Error: Invalid operation. Use +,-,*,or/.\n");
    }
    return 0;
}
