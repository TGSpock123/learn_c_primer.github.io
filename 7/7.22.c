#include <stdio.h>
#define basicSalPerHour 1000
#define stillWorkTime_times 1.5
#define basicWorkTime 40
#define taxLow300 0.15
#define tax300To450 0.2
#define taxAbv450 0.25
int main (void)
{
	int workTime;
	float salary, tax;

	printf ("Please enter your working hour last week: \n");
	scanf ("%d", &workTime);
	if (workTime <= basicWorkTime && workTime > 0)
	{
		salary = workTime * basicSalPerHour;
		if (salary <= 300)
		{
			tax = salary * taxLow300;
		}else if (salary > 300 && salary <= 450)
		{
			tax = (salary - 300) * tax300To450 + 300 * taxLow300;
		}else if (salary > 450)
		{
			tax = (salary - 450) * taxAbv450 + 150 * tax300To450 + 300 * taxLow300;
		}
		printf ("Your salary is %.3f$, tax is %.3f$, your acturally salary is %.3f$. \n", salary, tax, salary - tax);
	}else if (workTime > basicWorkTime && workTime < 168)
	{
		salary = (basicWorkTime + (workTime - basicWorkTime) * stillWorkTime_times) * basicSalPerHour;
		if (salary <= 300)
		{
			tax = salary * taxLow300;
		}else if (salary > 300 && salary <= 450)
		{
			tax = (salary - 300) * tax300To450 + 300 * taxLow300;
		}else if (salary > 450)
		{
			tax = (salary - 450) * taxAbv450 + 150 * tax300To450 + 300 * taxLow300;
		}
		printf ("Your salary is %.3f$, tax is %.3f$, your acturally salary is %.3f$. \n", salary, tax, salary - tax);
	}else if (workTime == 0)
	{
		printf ("Go to work, you dochebag! \n");
	}else if (workTime == 168)
	{
		printf ("Scab, you are a piece of shit. \n");
	}else
	{
		printf ("Please enter a correct working hour. \n");
	}
	
	return 0;
}
