#include <stdio.h>
int main() {

float daily_km, petrol_price, mileage, total, yearly_cost;


printf("----------------------------------------\n");
printf("        BIKE MILEAGE CALCULATOR\n");
printf("----------------------------------------\n");

printf("\nEnter how many km do you travelling daily (in km): ");
scanf("%f",&daily_km);
printf("\nEnter how much fuel cost per litre (in your city): ");
scanf("%f",&petrol_price);
printf("\nEnter your bike mileage (per litre): ");
scanf("%f",&mileage);



total = (daily_km*petrol_price*30/mileage);

yearly_cost = 12*total;

printf("----------------------------------------\n");
printf("\nPer month fuel cost is %.2f\n",total);
printf("\nPer year fuel cost is %.2f\n",yearly_cost);
printf("----------------------------------------\n");
return 0;

}
