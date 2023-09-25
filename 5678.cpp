#include <iostream>

using namespace std;

int itc_max_num(long long number)
{
    int z,a=0;
    while (number>0)
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
    int a=number%10;
    while (number!=0)
    {
        if(number%10<a)
        {
            a=number%10;
        }
        number=number/10;
    }
    return a;
}

int itc_rev_num(long long number)
{
    int a,i=0;
    a=(number-number/10*10)*100 + (number/10-number/100*10)*10 + (number/100);
    while (a>0)
    {
        a=a/10;
        i++;
    }
    while (a<0){
        a=a/10;
        i++;
    }
    while (number==0)
    {
        return 1;
    }
    return i;

    //return a;
}

int itc_null_count(long long number)
{
    int a=0;
    while (number!=0)
    {
        if(number%10==0)
        {
            a++;
        }
        number=number/10;
    }
    return a;
}
