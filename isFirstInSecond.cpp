#include "middle_str.h"

bool itc_isFirstInSecond(string str1, string str2)
{
    if(str1 == "" || str2 == "")
        return 0;
    if(itc_len(str1) > itc_len(str2))
        return 0;
    long long len1 = itc_len(str1), len2 = itc_len(str2), i = 0, s = 0;
    bool isAnswer = 1;
    while (i < len2)
    {
        if(str2[i] == str1[0])
        {
            while (s < len1)
            {
                if(str2[i + s] != str1[s])
                    isAnswer = 0;
                s ++;
            }
            if(isAnswer == 1)
                return 1;
        }
        isAnswer = 1;
        i ++;
    }
    return 0;
}
