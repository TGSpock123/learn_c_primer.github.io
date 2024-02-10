#include "s_gets.h"
#define LENGTH 80
#define OPR1 "1. print original strings. "
#define OPR2 "2. print strings sort by ASCII. "
#define OPR3 "3. print strings sort by string length. "
#define OPR4 "4. print strings sort by first word's length. "
#define QUIT "5. quit. "
void opr_1 (char str[][LENGTH], int d);
void opr_2 (char * n[10], int d);
void opr_3_1 (char * str[], int d);
void opr_3_2 (char * str[], int d);
void opr_4 (char * str[], int d);
