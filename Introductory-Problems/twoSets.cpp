#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)

int main(){
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll test;
    cin >> test;
    ll sum = test*(test +1)/2;
    vector<int> numbers;
    if (sum%2 == 0)
    {
        cout << "YES\n";
        sum=sum/2;
        //cout << "Sum .: " << sum << endl;
        int diff=0,i=1,posi=0;
        while(sum%(test+diff) !=0)
            diff++;
        //cout << "Diff .: " << diff << endl;
        ll count = sum/(test+diff);
        //cout << "Count .: " << count << endl;
        if(diff !=0)
            numbers.push_back(diff);
        numbers.push_back(test);
        while(i < count){
            numbers.push_back(diff+i);
            numbers.push_back(test-i);
            i++;
        }
        sort(numbers.begin(),numbers.end());
        cout << numbers.size() << endl;
        floop(i,numbers.size()){
            cout << numbers[i] << " ";
        }
        cout << endl;
        cout << test - numbers.size() << endl;
        for(int i =1;i<=test;i++){
            if(numbers[posi] == i)
            {
                posi++;
                continue;
            }
            cout << i << " ";
        }
        cout << endl;

    }
    else
        cout << "NO\n";
    
    return 0;
}