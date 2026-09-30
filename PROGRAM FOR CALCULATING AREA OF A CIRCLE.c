#include <stdio.h>
#include <stdlib.h>
int main ()
//variable declaration and initialization
{
    double area;
    const double pi=3.142;
double r;

//capture input from user
printf("Hello this is a program for circle area calculation.Please input the radius the radius of the circle you want to find area");
scanf("%lf",&r);
area=pi*r*r;
printf("Area of circle is %lf",area);
return 0;
}
