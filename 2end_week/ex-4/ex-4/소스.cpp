#include <stdio.h>
int main(void)
{
	double weight = 0.0;
	double height = 0.0;
	double BMI = 0.0;
	double res = 0.0;
	
	printf("input your weight(kg) and height(cm) : ");
	scanf_s("%lf%lf", &weight, &height);

	double BMI_h = (height / 100);
	BMI = weight / (BMI_h * BMI_h);

	(20.0 <= BMI < 25.0) ? 
	printf("you've average BMI") : printf ("Need to take care of your weight");

		return 0;
}
