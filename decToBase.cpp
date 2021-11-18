#include "middle_str.h"

string itc_decToBase(int num, int base)
{
    if(base < 0 || base > 16)
        return "error";
    if(num < 0)
        return "error";
    if(base <= 10)
        return to_string(itc_covert_num(num, base));
    if(num == base)
        return "1";
    string out = "", r = "";
    int lenNum = itc_len_num(num);
    int i = 0, currentChar = 0;
    while (num > base)
    {
        currentChar = num % base;
        if(currentChar > 9)
            out.push_back(currentChar - 10 + 65);
        else
            out.push_back(currentChar + 48);
        currentChar = 0;
        num = num / base;
    }
    if(num < 10)
        out.push_back(num + 48);
    else
        out.push_back(num - 10 + 65);
    int len = itc_len(out) - 1;
    while(i <= len)
    {
        r = r + out[len - i];
        i ++;
    }
    return r;
}
