#include "middle_str.h"

string itc_Cezar(string str, int s)
{
    if(str.empty())
        return "";
    string re = "";
    long long k = s;
    long long i = 0, len = itc_len(str);
    char charr = 0;
    //k = 1;
    while (k >= 26)
        k = k - 26;
    //k = k % 27;
    while (i < len)
    {
        if((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
            charr = str[i] + k;
        else
            charr = str[i];
        re.push_back(charr);
        i++;
    }
    return re;
}
