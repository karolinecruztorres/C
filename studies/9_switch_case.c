#include <stdio.h>

int main(void)
{
  int value;
  float salary, irs, niss;

  printf("Inform your gross salary, IRS tax and NISS tax: ");
  scanf("%f %f %f", &salary, &irs, &niss);

  float irs_deduction = (salary / 100) * irs;
  float niss_deduction = (salary / 100) * niss;
  float net_salary = (salary - irs_deduction) - niss_deduction;

  printf("Choose one of the options below: \n 1- Net salary \n 2- Amount discounted by irs \n 3- Amount discounted by niss \n --> ");
  scanf("%d", &value);

  switch (value)
  {
  case 1:
    printf("Your your net salary is %.2f euros.", net_salary);
    break;

  case 2:
    printf("The IRS deduction is %.2f euros from the salary.", irs_deduction);
    break;

  case 3:
    printf("The NISS deduction is %.2f euros from the salary.", niss_deduction);
    break;

  default:
    printf("You need to enter a valid number.");
  }
  return 0;
}