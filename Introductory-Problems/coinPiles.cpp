#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)
ll modPower(ll num, unsigned int pow, ll modulo)
{

    if (num == 0)
        return 0;
    num = num % modulo;
    ll result = 1;
    while (pow > 0)
    {
        if (pow & 1)
            result = (result * num) % modulo;
        pow = pow >> 1;
        result = (result * result) % modulo;
    }
    return result;
}
void solve()
{
    double a,b,x,y;
    cin >> a >> b;
    x = (4.0*a - 2.0*b)/3.0;
    y = (2.0*b - a)/3.0;
    if(x < 0 || y < 0){
        cout << "NO\n";
        return;
    }
    if(ceil(x) != floor(x) || ceil(y) != floor(y))
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";

}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}