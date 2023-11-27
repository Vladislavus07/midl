#include <iostream>

using namespace std;

long long itc_oct_num(long long number)
{
    long long a = 1;
    long long b = 0;

    while (number != 0) {
        int z = number % 8;
        b += z * a;
        a *= 10;
        number /= 8;
    }

    return b;
}
int itc_rev_bin_num(long long number)
{
    int a = 1;
    int b = 0;

    while (number != 0) {
        int z = number % 10;
        b += z * a;
        a *= 2;
        number /= 10;
    }

    return b;
}

string perevod(int number)
    {
    string st = "";
    while (number > 0) {
        int zifra = number % 3;
        number = number / 3;
        char z = zifra + '0';
        st = z + st;
    }
    return st;
}
