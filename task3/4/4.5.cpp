#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a [100][100]= {0};
    a [0][0]=1;
        for(int i=1;i<n;i++){
            a[i][0]=1;          
            for(int j=1;j<=i;j++){
                if(i==j){
                    a[i][j]=1;
                }
                else{
                a[i][j]=a[i-1][j]+a[i-1][j-1];
                }
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
        cout << a[i][j] << " ";
        }
        cout << endl;
    }






    return 0;
}