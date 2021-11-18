#include "middle_str.h"

long long my_ten_in_step(long long i)
{
    if(i == 0)
        return 0;
    long long i2 = 0;
    long long r = 1;
    while (i2 < i)
    {
        r = r * 10;
        i2 ++;
    }
    return r;
}
