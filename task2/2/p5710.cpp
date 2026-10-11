#include <iostream>
using namespace std;
//判断一个数是否符合条件
int main() {
    int x;
    cin >> x;
    int a1= x%2 ==0;
    int a2= x > 4 && x <= 12;
    int A = a1 && a2;
    int Uim = a1 || a2;
    int B = a1 != a2;
    int zheng = !a1 && !a2;
    cout << A << " " << Uim << " " << B << " " << zheng << endl;
    
    return 0;
}