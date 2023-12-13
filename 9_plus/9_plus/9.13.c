//
//  9.13.c
//  9_plus
//
//  Created by T G Spock on 2023/12/6.
//

#include <stdio.h>
#include "9.12_13.h"
unsigned long fb (unsigned q)
{
    if (q > 2)
    {
        return fb (q -2) + fb (q - 1);
    }else
    {
        return 1;
    }
}
