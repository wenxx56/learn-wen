// 给定 n 和 k，将从 1 到 n 之间的所有正整数可以分为两类
// ：A 类数可以被 k 整除（也就是说是 k 的倍数），
// 而 B 类数不能。请输出这两类数的平均数，精确到小数点后 1 位，用空格隔开。--总数，个数
// 数据保证两类数的个数都不会是 0。
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, k ;
    cin >> n >> k;
    int suma = 0, sumb = 0 , counta = 0, countb = 0;
    for(int i = 1; i <= n; i++) {
        if(i % k == 0) {
            suma += i;
            counta++;
        } else {
            sumb += i;
            countb++;
        }
        
    
    }

    double a = 1.0*suma/counta;
    double b = 1.0*sumb/countb;
    cout << fixed << setprecision(1) << a << " " << b << endl;
    return 0;
}