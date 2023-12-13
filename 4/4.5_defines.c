#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("some number limits in this system :\n");
    printf("how many bits in char: %d\n",CHAR_BIT);
    printf("biggist char: %d\n",CHAR_MAX);
    printf("smallest char: %d\n",CHAR_MIN);
    printf("biggist signed char: %d\n",SCHAR_MAX);
    printf("smallest sighed char: %d\n",SCHAR_MIN);
    printf("biggist unsigned char: %d\n",UCHAR_MAX);
    printf("biggist short int: %d\n",SHRT_MAX);
    printf("smallest short int: %d\n",SHRT_MIN);
    printf("biggist int: %d\n",INT_MAX);
    printf("smallest int: %d\n",INT_MIN);
    printf("biggist unsighed int: %u\n",UINT_MAX);
    printf("biggist long int: %ld\n",LONG_MAX);
    printf("smallest long int: %ld\n",LONG_MIN);
    printf("biggist unsigned long int: %lu\n",ULONG_MAX);
    printf("biggist long long int: %lld\n",LLONG_MAX);
    printf("smallest long long int: %lld\n",LLONG_MIN);
    printf("biggist unsigned long long: %llu\n",ULLONG_MAX);
    printf("float precision: %d digits\n",FLT_DIG);
    printf("double float precision: %d digits\n",DBL_DIG);
    printf("long double float precision: %d digits\n",LDBL_DIG);
    printf("float mantissa precision:%d digits\n",FLT_MANT_DIG);
    printf("double float mantissa precision: %d digits\n",DBL_MANT_DIG);
    printf("long double float mantissa precision: %d digits\n",LDBL_MANT_DIG);
    printf("biggist float: %e\n",FLT_MAX);
    printf("smallest float: %e\n",FLT_MIN);
    printf("biggist double float: %e\n",DBL_MAX);
    printf("smallest double float: %e\n",DBL_MIN);
    printf("biggist long double float: %Le\n",LDBL_MAX);
    printf("smallest long double flloat: %Le\n",LDBL_MIN);
    printf("1 minus smallest float bigger than 1: %e\n",FLT_EPSILON);
    printf("1 minus smallest double float bigger than 1: %e\n",DBL_EPSILON);
    printf("1 minus smallest long double float bigger than 1: %Le\n",LDBL_EPSILON);
    printf("minimum negative exponent a float with all significant figures has(base 10): %d\n",FLT_MIN_10_EXP);
    printf("maximum positive exponent a float with all significant figures has(base 10): %d\n",FLT_MAX_10_EXP);
    printf("minimum negative exponent a double float with all significant figures has(base 10): %d\n",DBL_MIN_10_EXP);
    printf("maximum positive exponent a double float with all significant figures has(base 10): %d\n",DBL_MAX_10_EXP);
    printf("minimum negative exponent a long double float with all significant figures has(base 10): %d\n",LDBL_MIN_10_EXP);
    printf("maximum positive exponent a long double float with all significant figures has(base 10): %d\n",LDBL_MAX_10_EXP);

    return 0;
}