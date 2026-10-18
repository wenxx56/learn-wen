/*  小玉在开心地游泳，可是她很快难过地发现，自己的力气不够，游泳好累哦。
已知小玉第一步能游 2 米，可是随着越来越累，力气越来越小，她接下来的每一步都只能游出上一步距离的 98%。
现在小玉想知道，如果要游到距离 s 米的地方，她需要游多少步(step)呢。请你编程解决这个问题。*/
//float i=2.0  i=0.98*i sum

#include <iostream>
using namespace std;

int main() {
    int step =0;
    float s, i=2, sum=0;
    cin >> s;
    while (sum<s){
        sum+=i;
        step++;
        i=0.98*i;
    }
    cout << step << endl;








    return 0;
}
