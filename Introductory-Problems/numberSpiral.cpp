#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)
void solve(){
    ll row,col,ans;
    cin >> row >> col;
    if(row <= col){

        if(col%2)
            ans = powl(col,2) - (row-1);
        else{
            ans = powl(col-1,2) + row; 
            }     
    }
    else{
        if(row%2 == 0)
            ans = powl(row,2) - (col-1);
        else
            ans = powl(row-1,2) + col; 
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin >> test;
    while(test--)
        solve();
}