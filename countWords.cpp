#include "middle_str.h"

int itc_countWords(string str)
{
    long long len = itc_len(str);
    long long i = 0;
    int colSlov = 0;
    bool isSlovo = 1;
    while (i < len)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {

        }
        else
            if(str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != ';')
                isSlovo = 0;
        if((str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == ';') && isSlovo == 1)
            colSlov ++;
        i ++;
    }
    //if(colSlov > 0)
        //return colSlov + 1;
    return colSlov + isSlovo;
}
