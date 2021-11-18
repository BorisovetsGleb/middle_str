#include "middle_str.h"

unsigned char itc_changeCase(unsigned char c)
{
    if(c == NULL)
        return c;
    if(c >= 97 && c <= 122)
        return itc_toUpper(c);
    else
    {
        if(c >= 65 && c <= 90)
            return c + 32;
    }
    return c;
}
