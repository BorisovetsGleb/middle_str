#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    if(str.empty())
        return "";
    string out = "", ret = "";
    long long i = 0;
    while(i < itc_len(str))
    {
        if(str[i] != ' ')
            out = out + str[i];
        else
        {
            if(str[i - 1] != ' ' && i != 0)
                out.push_back(str[i]);
        }

        i++;
    }
    i = 0;
    if(out[itc_len(out) - 1] == ' ')
    {
        while (i < (itc_len(out) - 1))
        {
            ret = ret + out[i];
            i ++;
        }
    }
    else
        ret = out;
    return ret;
}
