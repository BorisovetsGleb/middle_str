#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include <string>
using namespace std;

bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string a, string b);
int itc_countWords(string a);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string str1, string str2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int num, int base);


long long itc_len(string str);
int Convetr_Str_To_Int(string str);
long long itc_covert_num(long long num, int i);
int Convert_Str_To_Bin(string str);
long long my_rev(long long num);
long long my_ten_in_step(long long i);
long long itc_rev_covert_num(long long num, int i);
int itc_len_num(long long num);
int itc_max_num(long long num);
long long itc_pow(long long num, int step);
long long itc_abs(long long num);
long long itc_covert_num(long long num, int i);

#endif // MIDDLE_STR_H_INCLUDED
