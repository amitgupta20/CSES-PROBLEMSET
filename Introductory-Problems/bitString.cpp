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
        pow = pow>>1;
        num = (num*num) % modulo;
    }
    return result;
}
void solve()
{
    int n;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin >> test;
    ll out = modPower(2,test,1000000007);
    cout << out;
    return 0;
}