#include <stdio.h>

/* print Fharenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point with function version */

float convert(float fahr);



float main()
{
	float fahr;
	while ((fahr=getchar()) != EOF){
		printf("The Fahrenheit temperature :%3.0fF, The Celsius temperature :%6.1f", fahr, convert(fahr));
			}
			return 0;
		}

float convert(float fahr)
{
	float c;
	c = (5.0/9.0) * (fahr - 32);
	return c;
	}

