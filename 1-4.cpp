#include <iostream>

using namespace std;

void itc_num_print(int number)
{
    cout << number;
}

int itc_len_num(long long number)
{
    int a=0;
    if (number<0)
    {
        number = -number; 
    }
    if (number==0)
    {
        return 1;
    }
    while (number!=0)
    {
        number=number/10;
        a++;
    }
    return a;
}

int itc_sum_num(long long number)
{
    int a=0;
    while (number!=0)
    {
        if (number<0)
        number = -number;
        a=a + number%10;
        number=number/10;
    }
    return a;
}

long long itc_multi_num(long long number)
{
    int a=1;
    int z;
    if (number<0)
    {
        number = - number;
    }
    if (number==0)
    {
        return 0;
    }
    while (number>0)
    {
        z=number%10;
        a=a*z;
        number=number/10;
    }
    return a;
}
