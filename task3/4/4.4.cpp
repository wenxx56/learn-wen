#include <iostream>
using namespace std;
int main(){
    //输入
 
    int n;
    cin >> n;
    double a[20000] ;
    int t[20000];
    for(int i=1; i<=n;i++){
        cin >> a[i] >> t[i];
    
    }
    int num[20000]={0};
    for (int i =1;i<=n;i++){
        for(int k=1;k<=t[i];k++){
            int m= (int) (k*a[i]);
            num[m]++;
    }}
    for(int i=1;;i++){
        if(num[i]%2!=0){
            cout << i << endl;
            break;
        
        }
        
        
    }






    return 0;
}