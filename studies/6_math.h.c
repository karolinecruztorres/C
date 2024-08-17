#include <stdio.h>
#include <math.h>

#define PI_RAD 3.14
#define PI_DEGREES 180

int main(void)
{
  float angle_deg, angle_rad, cosine;

  printf("Inform the angle: ");
  scanf("%f", &angle_deg);

  angle_rad = PI_RAD * angle_deg / PI_DEGREES;
  printf("The sine of %.1f e %.4f. \n", angle_deg, sin(angle_rad));
  printf("The cosine of %.1f e %.4f. \n", angle_deg, cos(angle_rad));
  printf("The tangent of %.1f e %.4f. \n", angle_deg, tan(angle_rad));

  cosine = sqrt(1 - pow(sin(angle_rad), 2));
  printf("The cosine of %.1f e %.4f. \n \n", angle_deg, cosine);

  printf("Ceiling of PI is %.1f. \n", ceil(PI_RAD));
  printf("Floor of PI is %.1f. \n", floor(PI_RAD));
  printf("The log 10 of PI is %.3f. \n", log10(PI_RAD));
  printf("The log e of PI is %.3f. \n", log(PI_RAD));

  return 0;
}