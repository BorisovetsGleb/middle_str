#include "middle_str.h"

bool itc_isIp(string str)
{
    long long len = itc_len(str);
    int colOfPoints = 0, colOfPoints2 = 0, odin, dva, tri, chet;
    int i = 0;
    string pervChast = "", vtorChast = "", tretChast = "", chetvChast = "";

    while (i < len)
    {
        if(str[i] == '.')
            colOfPoints += 1;
        i ++;
    }
    if(colOfPoints != 3)
        return 0;
    i = 0;
    while(i < len)
    {
        if(str[i] == '.')
        {
            colOfPoints2 ++;
            i ++;
        }
        if(colOfPoints2 == 0)
            pervChast += str[i];
        if(colOfPoints2 == 1)
            vtorChast += str[i];
        if(colOfPoints2 == 2)
            tretChast += str[i];
        if(colOfPoints2 == 3)
            chetvChast += str[i];
        i ++;
    }
    odin = Convetr_Str_To_Int(pervChast);
    dva = Convetr_Str_To_Int(vtorChast);
    tri = Convetr_Str_To_Int(tretChast);
    chet = Convetr_Str_To_Int(chetvChast);
    if(odin <= 255 && dva <= 255 && tri <= 255 && chet <= 255 && odin >= 0 &&dva >= 0 && tri >= 0 && chet >= 0)
        return 1;
    return 0;
}

int Convetr_Str_To_Int(string str)
{
    int len = itc_len(str);
    int out = 0;
    if(len == 1)
        out = str[0] - 48;
    if(len == 2)
    {
        out = (str[0] - 48) * 10 + (str[1] - 48);
    }
    if(len == 3)
        out = (str[0] - 48) * 100 + (str[1] - 48) * 10 + (str[2] - 48);
    if(len > 3)
        out = 256;
    return out;
}
