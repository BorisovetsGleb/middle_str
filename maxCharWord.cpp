#include "middle_str.h"

string itc_maxCharWord(string str)
{
    if(str.empty())
        return "error";
    long long len = itc_len(str);
    long long i = 0;
    int colSlov = 0;
    bool isSlovo = 1;
    string maxSlovo = "", maxSlovo2 = "";
    while (i < len)
    {
        if(((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) && isSlovo == 1)
        {
            maxSlovo = maxSlovo + str[i];
        }
        else
        {
            if(/*str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != ';'*/ str[i] < 32 || str[i] > 122)
            {
                isSlovo = 0;
                maxSlovo = "";
            }
            if((str[i] != ' ' && (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)) && ((str[i + 1] >= 65 && str[i + 1] <= 90) || (str[i + 1] >= 97 && str[i + 1] <= 122)))
            {
                isSlovo = 0;
                maxSlovo = "";
            }
        }
        if((str[i] == ' ') && isSlovo == 1)
        {
            if(itc_len(maxSlovo) > itc_len(maxSlovo2))
                maxSlovo2 = maxSlovo;
            maxSlovo = "";
            colSlov ++;
            isSlovo = 1;
        }
        if(str[i] == ' ')
        {
            isSlovo = 1;
            colSlov ++;
        }
        i ++;
    }
    if(colSlov == 0)
        return "error";
    if((itc_len(maxSlovo) > itc_len(maxSlovo2) && isSlovo == 1))
                maxSlovo2 = maxSlovo;
    //if(colSlov > 0)
        //return colSlov + 1;
    return maxSlovo2;
}
