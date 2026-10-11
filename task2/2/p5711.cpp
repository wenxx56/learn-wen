#include <iostream>
using namespace std;

int main() 
{
    int a;
    cin >> a;
    //普通闰年：公历年份是 4 的倍数，且不是 100 的倍数的，为闰年（如 2004 年、2020 年等就是闰年）。

    //世纪闰年：公历年份是整百数的,必须是 400 的倍数才是闰年（如 1900 年不是闰年,2000 年是闰年）.
    bool Y = (a % 4 == 0 && a % 100 != 0 || a % 400 == 0);
        cout << Y << endl;

    return 0;
}