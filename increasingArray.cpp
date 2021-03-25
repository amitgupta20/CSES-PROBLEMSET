#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin >> test;
    ll array[test],swaps=0;
    int i;
    floop(i,test){
        cin >> array[i];
    }
    for(int i=1;i<test;i++){
        if(array[i] < array[i-1]){
            
            swaps+=(array[i-1] - array[i]);
            array[i] = array[i-1];
        }
    }
    cout << swaps << endl;    
}