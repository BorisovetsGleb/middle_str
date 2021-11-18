#include "middle_str.h"

char itc_sameChar(string a)
{
    if(a == "")
        return NULL;
    //string allCharsOnlyLitera = "";
    long long i = 0, s = 0;
    int colOfFind = 0;
    while (i < itc_len(a))
    {
        while (s < itc_len(a))
        {
            if(a[s] == a[i] && ((a[s] >= 65 && a[s] <= 90) || a[s] >= 97 && a[s] <= 122))
                colOfFind ++;
                //cout <<"a[i] = " <<a[i] <<" a[s] = " <<a[s] <<"  ";
            s++;
        }
        s = 0;
        if(colOfFind > 1)
            return a[i];
        colOfFind = 0;
        i++;
    }
}
