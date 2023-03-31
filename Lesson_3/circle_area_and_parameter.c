#include<stdio.h>

#define PI 3.14159

int main()
{
    float r = 1.5f;

    float parameter;
    float area;

    parameter = 2 * PI* r;
    area = PI * r * r;

    printf("The area of circle is %f \n",area);
    printf("The parameter of circle is %f \n",parameter);
    return 0;
  
}