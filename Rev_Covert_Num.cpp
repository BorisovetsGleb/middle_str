#include "middle_str.h"

long long itc_rev_covert_num(long long num, int i)
{
    long long len = itc_len_num(num);
    if(num <= 0)
        return -1;
    if(i < 2 || i > 10)
        return -1;
    if(itc_max_num(num) >= i)
        return -1;

    else
    {
        long long l = 0;
        long long dec = 0;
        long long num2 = num;
        while (l < len)
        {
            dec = dec + ((num % 10) * itc_pow(i, l));
            l ++;
            num = num / 10;
        }
        return dec;
    }
}

int itc_len_num(long long num)
{
    int i = 0;
    if(num == 0)
        return 1;
    num = itc_abs(num);
    while(num > 0)
    {
        i ++;
        num = num / 10;
    }
    return i;
}

int itc_max_num(long long num)
{
    int max1 = 0;
    num = itc_abs(num);
    while(num > 0)
    {
        if(num % 10 > max1)
        {
            max1 = num % 10;
        }
        num = num / 10;
    }
    return max1;
}

long long itc_pow(long long num, int step)
{
    int i = 1;
    int num2 = num;
    if(step == 0)
    {
        return 1;
    }
    while (i < step)
    {
        num2 = num2 * num;
        i ++;
    }
    if(step > 0)
    {
        return num2;
    }

    long long num1 = num2;
    if(step < 0)
    {
        return 1 / num1;
    }
}

long long itc_abs(long long num)
{
    if(num < 0)
    {
        return num * (-1);
    }
    return num;
}
