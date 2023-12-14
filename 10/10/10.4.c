//
//  10.4.c
//  10
//
//  Created by T G Spock on 2023/12/13.
//

#include <stdio.h>
#define SIZE 4
int main (void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;
    
    printf ("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -3; i <= SIZE; i ++)
    {
        arr[i] = 2 * i + 1;
    }
    for (i = -3; i < 7; i ++)
    {
        printf ("%2d %d\n", i, arr[i]);
    }
    printf ("value1 = %d, value2 = %d\n", value1, value2);
    printf ("address of arr[-2]: %p\n", &arr[-2]);
    printf ("address of arr[-3]: %p\n", &arr[-3]);
    printf ("address of value1: %p\n", &value1);
    printf ("address of value2: %p\n", &value2);
    
    return 0;
}
