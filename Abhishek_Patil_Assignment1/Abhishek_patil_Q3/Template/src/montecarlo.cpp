#include "std_lib_facilities.h"

double ellipse_equation(double x);
double monteCarloEstimate(double lowBoundX, double upBoundX, double lowBoundY, double upBoundY,int iterations);

int main()
{

	double lowerBoundX, upperBoundX, lowerBoundY,upperBoundY;
	int iterations;

	lowerBoundX = 0;
	upperBoundX = 2.25;
	lowerBoundY = 0;
	upperBoundY = 1.80;
	
	iterations = 200;

	double estimate = monteCarloEstimate(lowerBoundX, upperBoundX,lowerBoundY, upperBoundY,iterations);

	printf("Estimate for area %.1f -> %.1f is %.2f, (%i iterations)\n",
			lowerBoundX, upperBoundX, estimate, iterations);

	return 0;
}


double ellipse_equation(double x, double y)
{
	return 16*pow(x,2)-25*pow(y,2);
}

double monteCarloEstimate(double lowBoundX, double upBoundX, double lowBoundY, double upBoundY,int iterations)
{

	double totalSum = 0;
	double randNum1,randNum2, functionVal;

	int iter = 0;

	while (iter<iterations-1)
	{

		//Select a random number within the limits of integration
		randNum1 = lowBoundX + (float(rand())/RAND_MAX) * (upBoundX-lowBoundX);
		randNum2 = lowBoundY + (float(rand())/RAND_MAX) * (upBoundY-lowBoundY);

		//Sample the function's values
		functionVal = ellipse_equation(randNum1,randNum2);

		//Add the f(x) value to the running sum
		totalSum += functionVal;

		iter++;
	}

	double estimate = (upBoundX-lowBoundX)*totalSum/iterations;

	return estimate*4;
}
