#include <iostream>
using namespace std;

/*给出 n 和 n 个整数 a ,求这 n 个整数中最小值是什么。第一行输入一个正整数 n，表示数字个数。

第二行输入 n 个非负整数，表示这 n 个整数，整数之间以空格隔开。输出最小值。*/
// int main() {
//     int n;
//     cin >> n;
    // int a[200];
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // int min = a[0];
    // for (int i = 1; i < n; i++) {
    //     if (a[i] < min) {
    //         min = a[i];
    //     }
    // }
    // cout << min << endl;
int main() {
    int n;
    cin >> n;
    int min = 1000;
    for (int i = 1; i < n; i++) 
    {
        int a;
        cin >> a;
        if (a < min) 
            min = a;
        
    }
    cout << min << endl;
    return 0;
}