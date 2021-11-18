#include "middle_str.h"

long long my_rev(long long num)
{
    long long r = 0;
    while (num > 0)
    {
        r = r * 10 + (num % 10);
        num = num / 10;
    }
    return r;
}
