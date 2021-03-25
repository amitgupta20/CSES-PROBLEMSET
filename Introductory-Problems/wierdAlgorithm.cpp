#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll test;
    cin >> test;
    while(test != 1){
        cout << test << " ";
        if(test%2 == 0)
            test/=2;
        else
            test = 3*test +1;
    }
    cout << test << endl;
    
}