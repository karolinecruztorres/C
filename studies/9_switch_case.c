#include <stdio.h>

int main(void)
{
  int value;
  float salary, irs, niss;

  printf("Inform your gross salary, IRS tax and NISS tax: ");
  scanf("%f %f %f", &salary, &irs, &niss);

  float irsDeduction = (salary / 100) * irs;
  float nissDeduction = (salary / 100) * niss;
  float netSalary = (salary - irsDeduction) - nissDeduction;

  printf("Choose one of the options below: \n 1- Net salary \n 2- Amount discounted by irs \n 3- Amount discounted by niss \n --> ");
  scanf("%d", &value);

  switch (value)
  {
  case 1:
    printf("Your your net salary is %.2f euros.", netSalary);
    break;

  case 2:
    printf("The IRS deduction is %.2f euros from the salary.", irsDeduction);
    break;

  case 3:
    printf("The NISS deduction is %.2f euros from the salary.", nissDeduction);
    break;

  default:
    printf("You need to enter a valid number.");
  }
  return 0;
}