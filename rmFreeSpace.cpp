#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    if(str.empty())
        return "";
    string out = "";
    long long i = 0;
    while(i < itc_len(str))
    {
        if(str[i] != ' ')
            out = out + str[i];
        else
        {
            if(str[i - 1] != ' ')
                out.push_back(str[i]);
        }
        i++;
    }
    return out;
}
