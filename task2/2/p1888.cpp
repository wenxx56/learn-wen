#include <iostream>
#include <algorithm>
using namespace std;
//输入一组勾股数 a,b,c.用分数格式输出其较小锐角的正弦值（要求约分）。

int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    long long M = max({a,b,c});
    long long m = min({a,b,c});
    long long w = __gcd(m,M);
    m /= w;
    M /= w;
    cout << m << "/" << M << endl;

    
    return 0;
}
