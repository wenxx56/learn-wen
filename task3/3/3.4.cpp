#include <iostream>
using namespace std;
/*  计算 1+2+3+⋯+(n−1)+n 的值，其中正整数 n 不大于 100。
由于你没有高斯聪明，所以你不被允许使用等差数列求和公式直接求出答案。*/

int main(){
    int n; 
    cin >> n;
    int a =0 , sum=0;
    while(a<n){
         a++;
         sum+=a;

    }
    cout << sum << endl;






    return 0;
}


