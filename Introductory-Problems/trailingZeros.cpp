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
ll countFives(ll num){
    ll count = 0;
    while(num > 0){
        if(num%5 != 0)
            return count;
        count++;
        num/=5;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll test;
    cin >> test;
    ll out = 0;
    ll num = 5;
    while(num <= test){
        out+=countFives(num);
        num+=5;
    }
    cout << out;
    return 0;
}