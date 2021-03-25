#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll test,maxi=0,cur=1;
    string str;
    cin >> str;
    char x=str[0];    
    for(int i =1;i<str.size();i++){
        if(x == str[i])
            cur++;
        else{
            x=str[i];
            maxi= max(cur,maxi);
            cur=1;
        }
    }
    maxi = max(maxi,cur);
    cout << maxi << endl;
}