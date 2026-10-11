#include <iostream>
using namespace std;

int main() 
{
    int m,t,s,q;
    cin >> m >> t >> s ;
    if (t==0)
    {
        cout << m << endl;
    }
    else
    {
        q = m - s / t;
        cout << q << endl;
    }
    return 0;
}