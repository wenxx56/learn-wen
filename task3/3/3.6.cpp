/*  现在有 n(n≤1000) 位评委给选手打分，分值从 0 到 10。
需要去掉一个最高分，去掉一个最低分（如果有多个最高或者最低分，也只需要去掉一个），
剩下的评分的平均数就是这位选手的得分。
现在输入评委人数和他们的打分，请输出选手的最后得分，精确到 2 位小数。*/
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
int n;
cin >> n;
int score[10000], sum=0 ;
for(int i=0;i<n;i++){
    cin >> score[i];
    sum+=score[i];

    }
int H = score[0];
int L = score[0];
for (int i=1;i<n; i++){
    if (score[i]>H){
        H = score[i];
    }
    if(score[i]<L){
        L =score[i];
    }
}
    float aver = 1.0*(sum-L-H)/(n-2);
    cout << fixed << setprecision(2) << aver << endl;    

return 0;
}
