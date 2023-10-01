#include <iostream>

using namespace std;

bool itc_mirror_num(long long number)
    {
        long long a=0;
        long long b = number;
        while (number!=0)
        {
            long long z=number % 10;
            a=z+a*10;
            number/=10;
        }
        return a==b;
    }
int itc_mirror_count(long long number)
{
    int temp = 0;
    for (long long i = 1; i <= number; i++) {
        if (itc_mirror_num(i)) {
            temp++;
        }
    }
    return temp;
}
int itc_second_max_num(long long number)
{
    if (number < 0)
    {
        number = -number;
    }
    
    if (number <= 9) 
    {
        return -1;
    }
    
    int a = -1;
    int b = -1;

    while (number > 0) {
        int z = number % 10;

        if (z >= a) {
            b = a;
            a = z;
        } else if (z != a && z > b ) {
            b = z;
        }

        number /= 10;
    }

    return b;
}

int itc_second_simple_max_num(long long number)
{
    if (number < 0)
    {
        number = -number;
    }
    if (number <= 9) 
    {
        return -1;
    }
    

    int a = -1;
    int b = -1;

    while (number > 0) {
        int z = number % 10;

        if (z >= a) {
            b = a;
            a = z;
        } else if (z != a && z > b) {
            b = z;
        }

        number /= 10;
    }
    if (a == b)
        return -1;
    else
        return b;
}

long long itc_bin_num(long long number)
    {
    long long b = 1;
    long long a = 0;

    while (number != 0) {
        int z = number % 2;
        a += z * b;
        b *= 10;
        number /= 2;
    }

    return a;
}
