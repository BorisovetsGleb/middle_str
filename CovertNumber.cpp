#include "middle_str.h"

long long itc_covert_num(long long num, int i)
{
    if(num <= 0)
        return -1;
    if(i > 10 || i < 2)
        return -1;
    long long num2 = num;
    long long bin1 = 0;
    long long bin2 = 0;
    bool isFirstOne = 0;
    long long colOfNols = 0;
    while (num2 > 0)
    {
        if(num2 % i == 0 && isFirstOne == 0)
        {
            colOfNols ++;
        }
        if(num % i != 0)
        {
            isFirstOne = 1;
        }
        bin1 = bin1 * 10 + (num2 % i);
        num2 = num2 / i;
    }
    //if(itc_max_num(bin1) > (i - 1))
    //    return -1;
    if(colOfNols > 0)
        bin2 = my_rev(bin1) * my_ten_in_step(colOfNols);
    else
        bin2 = my_rev(bin1);
    if(itc_rev_covert_num(bin2, i) == num)
    {
        return bin2;
    }
    return -1;
}
