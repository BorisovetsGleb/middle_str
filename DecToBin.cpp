#include "middle_str.h"

string itc_DecToBin(string str)
{
    long long i = 0;
    string CurrentNumber = "", out = "";
    while(str[i] != '\0')
    {
        if(CurrentNumber != "" && (str[i] > '9' || str[i] < '0'))
        {
            out = out + to_string(Convert_Str_To_Bin(CurrentNumber));
            CurrentNumber = "";
            out = out + str[i];
        }
        else
        {
            if(str[i] <= '9' && str[i] >= '0')
            {
                CurrentNumber += str[i];
            }
            else
                out += str[i];
        }
        i++;
    }
    if(CurrentNumber != "")
    {
        out = out + to_string(Convert_Str_To_Bin(CurrentNumber));
        CurrentNumber = "";
        out = out + str[i];
    }
    return /*to_string(Convert_Str_To_Bin(CurrentNumber))*/out;
}

int Convert_Str_To_Bin(string str)
{
    int len = itc_len(str) - 1;
    int out = 0;
    int num = 0, i = 0, i2 = 0;
    string oout = "";
    while(i <= len)
    {
        num = num * 10 + (str[i] - 48);
        i ++;
    }
    long long len2 = itc_len_num(out);
    out = itc_covert_num(num, 2);
    /*while (i2 < len2)
    {
        if(out / my_ten_in_step(len2 - i2) == 0)
            oout += "0";
        else
            oout += "1";
        i2 ++;
    }*/
    return out;
}
