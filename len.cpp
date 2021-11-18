#include "middle_str.h"

long long itc_len(string str)
{
    long long i = 0;
    //string stop = "\0";
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
