/*每只鱼会得到一个整数数值，表示这只鱼的可爱程度，
很显然整数越大，表示这只鱼越可爱，
而且任意两只鱼的可爱程度可能一样。
由于所有的鱼头都朝向左边，所以每只鱼只能看见在它左边的鱼的可爱程度，
它们心里都在计算，在自己的眼力范围内有多少只鱼不如自己可爱呢。
请你帮这些可爱但是鱼脑不够用的小鱼们计算一下。
第一行输入一个正整数 n，表示鱼的数目。
第二行内输入 n 个非负整数，用空格间隔 
输出格式：
一行，输出 n 个整数，用空格间隔*/     
#include <iostream>;
using namespace std;

int main(){
    int n,num[100]={0} ;
    cin >> n;
    cout << endl;
    int score[1000];
    for(int i=0;i<n;i++){
    cin >> score[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(score[j]>score[i]){
                num[i]++;
            }
        }

    }
    for(int i=0;i<n;i++){
    cout << num[i] << " ";
    }

    





    return 0;
}