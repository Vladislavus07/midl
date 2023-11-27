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

#include <iostream>
#include <string>
using namespace std;

string perevod(int n)
    {
    string st = "";
    while (n > 0) {
        int zifra = n % 3;
        n = n / 3;
        char z = zifra + '0';
        st = z + st;
    }
    return st;
}

int main()
{
    int n;
    string tr, tro;
    cin >> n;
    tr = perevod(n);
    if (n % 3 == 0)
    {
        tr = "1" + tr + "02";
    }
    else
    {
        int ost = (n % 3) * 4;
        tro = perevod(ost);
        tr = tr + tro;
    }
    cout << tr;
    return 0;
}
