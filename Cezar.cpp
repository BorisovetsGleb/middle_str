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
        /*if(str[i] >= 97 && str[i] <= 122)
        {
            if(charr < 97)
            {
                while (charr < 97)
                {
                    charr += 26;
                }
            }
            if(charr > 122)
            {
                while (charr > 122)
                {
                    charr -= 26;
                }
            }
        }
        if(str[i] >= 65 && str[i] <= 90)
        {
            if(charr < 65)
            {
                while (charr < 65)
                {
                    charr += 26;
                }
            }
            if(charr > 90)
            {
                while(charr > 90)
                {
                    charr -= 26;
                }
            }
        }
        */
        re.push_back(charr);
        i++;
    }
    return re;
}
