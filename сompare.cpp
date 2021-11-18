#include "middle_str.h"

bool itc_compare(string a, string b)
{
    long long len1, len2;
    len1 = itc_len(a);
    len2 = itc_len(b);
    if(len1 != len2)
        return 0;
    long long i = 0;
    while (i < len1)
    {
        if(a[i] == b[i])
            i ++;
        else
            return 0;
    }
    return 1;
}
