#include <stdio.h>
int main (void)
{
	int * ptr;
	int trof[2][2] = {12, 14, 16};
	int trof_2[2][2] = {{12}, {14, 16}};

	ptr = trof[0];
	printf ("*ptr = %d ptr = %p\n", *ptr, ptr);
	printf ("*(ptr + 2) = %d ptr + 2 = %p\n", *(ptr + 2), ptr + 2);
	ptr = trof_2[0];
	printf ("*ptr2 = %d ptr2 = %p\n", *ptr, ptr);
	printf ("*(ptr2 + 2) = %d ptr2 + 2 = %p\n", *(ptr + 2), ptr + 2);

	return 0;
}
