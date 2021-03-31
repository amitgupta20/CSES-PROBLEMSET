#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define floop(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string out;
    map<char,int> myMap;
    cin >> out;
    int i;
    floop(i,out.length()){
        myMap[out[i]]++;
    }
    map<char,int>::iterator it;
    int countOdd=0;
    for(it = myMap.begin(); it!=myMap.end(); it++){
        if(it->second%2 == 1){
            countOdd++;
            if(countOdd > 1)
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
    }
    int start=0,end=out.length()-1;
    for(it = myMap.begin(); it!=myMap.end(); it++){
        if(it->second%2 == 1){
            int mid = out.length()/2;
            out[mid] = it->first;
            int count = it->second-1;
            int rev=mid-1,forw=mid+1;
            while(count > 0){
                count-=2;
                out[rev--] = it->first;
                out[forw++] = it->first;
            }
            continue;
        }
        int count = it->second;
        while(count>0){
            out[start++] = it->first;
            out[end--] = it->first;
            count-=2;
        }

    } 
    cout << out << endl;

    return 0;
}