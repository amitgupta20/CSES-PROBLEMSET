#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)
void solve(){
    int n;
}
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin >> test;
    if(test == 2 || test == 3)
        cout << "NO SOLUTION\n";
    else{
        
        for(int i=2;i<=test;i=i+2)
            cout << i << " ";
        for(int i=1;i<=test;i=i+2)
            cout << i << " ";
        cout << endl;
    }    
}