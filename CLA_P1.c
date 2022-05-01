#include<stdio.h>

int main()
{
    float distance,km_to_m,km_to_ft,km_to_in,km_to_cm;
    scanf("%f",&distance);
    km_to_m = distance*1000;
    km_to_ft = distance*3280.84;
    km_to_in = distance*39370.1;
    km_to_cm = distance*100000;
    printf("%0.2f m\n%0.2f ft\n%0.2f in\n%0.2f cm\n",km_to_m,km_to_ft,km_to_in,km_to_cm);
    return 0;
}    
    
