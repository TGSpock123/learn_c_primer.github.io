#include <stdio.h>
#include <string.h>
#define stillWorkTime_times 1.5
#define basicWorkTime 40
#define taxLow300 0.15
#define tax300To450 0.2
#define taxAbv450 0.25
int main (void)
{
	int workTime, stars, labl;
	float salary, tax, salPerH;
	const float salPerH1 = 8.75, salPerH2 = 9.33, salPerH3 = 10.00, salPerH4 = 11.20;
	const char CH [80] = "Please enter the number corresponding to the desired pay rate or action:";

	for (stars = 0; stars < strlen (CH); stars ++)
		putchar ('*');
	putchar ('\n');
	printf ("%s\n", CH);
	printf ("%-33s", "1) $8.75/hr");
	printf ("%-33s\n", "2) $9.33/hr");
	printf ("%-33s", "3) $10.00/hr");
	printf ("%-33s\n", "4) $11.20/hr");
	printf ("%-33s\n", "5) quit");
	for (stars = 0; stars < strlen (CH); stars ++)
		putchar ('*');
	putchar ('\n');
	while (scanf ("%d", &labl))
	{
		switch (labl)
		{
			case 1: salPerH = salPerH1;
				break;
			case 2: salPerH = salPerH2;
				break;
			case 3: salPerH = salPerH3;
				break;
			case 4: salPerH = salPerH4;
				break;
			case 5: salPerH = 0;
				break;
			default: printf ("Please enter the correct number 1-5.\n");
				 salPerH = 1;
				 break;
		}
		if (salPerH != 0 && salPerH != 1)
		{
			printf ("Please enter your working hour last week: \n");
			scanf ("%d", &workTime);
			if (workTime <= basicWorkTime && workTime > 0)
			{
				salary = workTime * salPerH;
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
				salary = (basicWorkTime + (workTime - basicWorkTime) * stillWorkTime_times) * salPerH;
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
			}else if (workTime < 0 || workTime > 168)
			{
				printf ("Please enter a correct working hour. \n");
			}
		}else if (salPerH == 0){
			break;
		}else
		{
			continue;
		}	
		for (stars = 0; stars < strlen (CH); stars ++)
			putchar ('*');
		putchar ('\n');
		printf ("%s\n", CH);
		printf ("%-33s", "1) $8.75/hr");
		printf ("%-33s\n", "2) $9.33/hr");
		printf ("%-33s", "3) $10.00/hr");
		printf ("%-33s\n", "4) $11.20/hr");
		printf ("%-33s\n", "5) quit");
		for (stars = 0; stars < strlen (CH); stars ++)
			putchar ('*');
		putchar ('\n');
	}
	printf ("Thank you for useing. \n");

	return 0;
}
