#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    ll sum=0;
    ll num;
    cin >> test;
    ll out = test;
    while (--test)
    {
        cin >> num;
        sum+=num;
    }
    cout << out*(out+1)/2 - sum << endl;
    
}