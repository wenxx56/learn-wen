#include <iostream>
using namespace std;
 int main(){
     int n , a[1000], i=1;
     cin >> n;
     //1.odd/even
     //2.
     //3.arr
     //4.change position
     a[0]=n;
     while (n!=1){
     if (n%2!=0){
        n=(3*n)+1;
        a[i]=n;
     }
    else {
        n =n/2;
        a[i]=n;
    }
    i++;
    }
    int num = i;
    for(int start =0,end = num -1;start<=end;start++,end--){
    int temp = a[start];
    a[start]=a[end];
    a[end]=temp;
    }
    for(int k=0;k<num;k++){
    cout << a[k] << " ";
    }





     return 0;
    }