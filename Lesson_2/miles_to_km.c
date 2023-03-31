/* The distance Of a marathon in kilometers */

/* 
 -> a marathon is defined to be 26 miles and 385 yards.
 -> yard to miles. We divide with 1760
 -> To convert miles to km we multiply with 1.609
int,float

 */

#include <stdio.h>

int main()
{
    int miles, yards;
    float kms;

    miles = 26;
    yards = 385;

    kms = 1.609 * (miles + (yards/1760));

    printf("The kms are %f \n",kms);


    return 0;
}