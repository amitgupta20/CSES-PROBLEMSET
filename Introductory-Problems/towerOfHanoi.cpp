#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)
void printHanioTransition(int n,int from,int to,int mid)
{
    if(n == 1)
    {
        cout << from << " " << to << endl;
        return;
    }
    printHanioTransition(n-1,from,mid,to);
    cout << from << " " << to << endl;
    printHanioTransition(n-1,mid,to,from);    
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin >> test;
    ll out = powl(2,test) -1;
    cout << out << endl;
    printHanioTransition(test,1,3,2);
    return 0;
}