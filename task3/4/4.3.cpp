#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int N, a[1010][3],NUM=0;
    cin >> N;
    for(int i =0; i<N;i++){
        cin >> a[i][0]>>a[i][1]>>a[i][2];
        cout << endl;
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int b1= abs(a[i][0]-a[j][0]) ,b2=abs (a[i][1]-a[j][1]), b3= abs (a[i][2]-a[j][2]);
            if(b1<=5 &&  b2<=5 &&  b3<=5 && b1+b2+b3<=10){
                NUM++;
            }
        }
    }
    cout << NUM <<endl;





    return 0;
}