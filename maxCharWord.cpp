#include "middle_str.h"

string itc_maxCharWord(string str)
{
    long long len = itc_len(str);
    long long i = 0;
    int colSlov = 0;
    bool isSlovo = 1;
    string maxSlovo, maxSlovo2;
    while (i < len)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            maxSlovo = maxSlovo + str[i];
        }
        else
            if(str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != ';')
            {
                isSlovo = 0;
                maxSlovo = "";
            }
        if((str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == ';') && isSlovo == 1)
        {
            if(itc_len(maxSlovo) > itc_len(maxSlovo2))
                maxSlovo2 = maxSlovo;
            maxSlovo = "";
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
