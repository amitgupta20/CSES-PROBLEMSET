#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin >> test;
    int i=0;
    floop(i,test){
        int n = i +1;
        if( n < 4)
        {
            if( n == 1)
                cout << 0 << endl;
            if(n == 2)
                cout << 6 << endl;
            if(n == 3)
                cout << 28 << endl;
            continue;
        }
        ll out = (powl(n,4) - powl(n,2) - 48 - 40*(n-4) - 8*powl((n-4),2))/2;
        cout << out << endl;
    }
    return 0;
}