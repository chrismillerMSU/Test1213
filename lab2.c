#include <stdio.h>

void askUsers(){ // Tells Users what to enter in order to get a correct house price calculation
    printf("Please enter the following: \n Initial house cost as a whole number with no commas \n Annual fuel cost as a whole number with no commas \n "
           "Tax rate as a decimal");
}
int getInitialCost(void){ //Asks users to enter a initial house cost and then scans in their answer and returns it as a int
    int houseCost;
    printf("\nInitial House Cost: \n");
    scanf("%d",&houseCost);
    return houseCost;
}
int getFuelCost(void){ //Asks users to enter a fuel cost and then scans in their answer and returns it as a int
    int fuelCost;
    printf("Fuel Cost: \n");
    scanf("%d",&fuelCost);
    return fuelCost;
}
double getTaxRate(void){ //Asks users to enter a tax rate and then scans in their answer and returns it as a double
    double taxRate;
    printf("Tax Rate: \n");
    scanf("%lf", &taxRate);
    return taxRate;
}
double getFiveYearCost(int houseCost, int fuelCost, double taxRate){ //Calculates the five year cost of buying a house given a initial house
    double total = houseCost;                            //cost(int), fuel cost(int) and tax rate(double) and returns the total
    total += (fuelCost*5);                                             //cost as a double.
    total += (houseCost*taxRate)*5;
    return total;
}
int main(void) {

    int fuelCost =0;
    int houseCost=0;
    double taxRate=0;

    askUsers(); //Prints directions
    houseCost = getInitialCost(); //Sets initial house cost
    fuelCost = getFuelCost(); //Sets fuel cost
    taxRate = getTaxRate(); //Sets tax rate
    printf("Total House Cost is : %.2lf",getFiveYearCost(houseCost,fuelCost,taxRate) ); //Prints total cost of house
    return 0;
}