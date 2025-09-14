#include <stdio.h>
int main (void) {

int num_motors; 
float package_weight, weight_pr_motor; 

printf("How many motors are carrying the packages?");
scanf("%d", &num_motors);

printf("How many kg of packages do we expect?");
scanf("%f", &package_weight);

weight_pr_motor = package_weight/num_motors; 

if(weight_pr_motor <= 5.6) {

printf("Yes! The conveyor belt can carry the packages.\a");
} else {
printf("No! The conveyor belt cannot carry the packages.\a"); 
}

return 0; 

} 