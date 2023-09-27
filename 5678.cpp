#include <iostream>

using namespace std;

int itc_max_num(long long number)
{
    int z,a=0;
    if (number<0)
    {
        number = -number;
    }
    if (number==0)
    {
        return 0;
    }
    while (number!=0)
    {
        if(number%10>a)
        {
            a=number%10;
        }
        number=number/10;
    }
    return a;
}

int itc_min_num(long long number)
{
    int z=10,a;
    if (number<0)
    {
        number= -number;
    }
    
    if (number==0)
    {
        return 0;
    }
    while (number!=0)
    {
        a=number%10;
        if(a <= z)
        {
            z=a;
        }
        number=number/10;
    }
    return z;
}

int itc_rev_num(long long number)
{
    int a,i=0;
    a=(number-number/10*10)*100 + (number/10-number/100*10)*10 + (number/100);
    if (a<0)
    {
        number= -number;
    }
    if (a == 0)
    {
        return 0;
    }
    while (a!=0)
    {
        a=a/10;
        i++;
    }
    return i;

    //return a;
}

int itc_null_count(long long number)
{
    int a=0;
    while (number==0)
    {
        return 1;
    }
    while (number>0)
    {
        if(number%10==0)
        {
            a++;
        }
        number=number/10;
    }
    while (number<0)
    {
        if(number%10==0)
        {
            a++;
        }
        number=number/10;
    }
    return a;
}
