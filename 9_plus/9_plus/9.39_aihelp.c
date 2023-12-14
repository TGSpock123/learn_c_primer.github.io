#include <stdio.h>

void swap(double * a, double * b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void sort(double arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void)
{
    double numbers[3];

    printf("Please input 3 numbers: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter number %d: ", i + 1);
        if (scanf("%lf", &numbers[i]) != 1)
        {
            printf("Invalid input. Exiting...\n");
            return 1;
        }
    }

    sort(numbers, 3);

    printf("Sorted numbers: %lf < %lf < %lf\n", numbers[0], numbers[1], numbers[2]);

    return 0;
}
