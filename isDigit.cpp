#include "middle_str.h"

bool itc_isDigit(unsigned char a)
{
    if(a == 0)
        return 0;
    if(a >= 48 && a <= 57)
        return 1;
    return 0;
}
