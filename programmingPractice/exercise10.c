#include <stdio.h>

void main() {

  int IDNO;
  char name[] = "";
  int consum;
  double charge;
  double chargePerUnit;
  double surcharge;
  double total;

  printf("Enter the ID Number:\n");
  scanf("%i", &IDNO);
  printf("Enter the Name:\n");
  scanf("%s", &name);
  printf("Enter the Electricity consumption:\n");
  scanf("%i", &consum);
  
  printf("==========\n");
  
  printf("Customer IDNO: %i\n", IDNO);
  printf("Customer Name: %s\n", name);
  printf("Unit consumed: %i\n", consum);

  if (consum < 200) {
    chargePerUnit = 1.2;
  } else if (consum < 400) {
    chargePerUnit = 1.5;
  } else if (consum < 600) {
    chargePerUnit = 1.8;
  } else {
    chargePerUnit = 2;
  }

  charge = consum * chargePerUnit;


  printf("Amount Charges @Rs. %f per unit: %f\n", chargePerUnit, charge);

  if (charge > 400) {
    surcharge = charge * 0.15;
  } else {
    surcharge = 0;
  }
  
  printf("Surcharge amount %f\n", surcharge);

  total = charge + surcharge;

  if (total < 100) {
    total = 100;
  }

  printf("Net amount paid by the customer: %f\n", total);
}

