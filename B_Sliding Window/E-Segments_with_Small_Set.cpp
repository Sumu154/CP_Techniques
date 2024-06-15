#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;

/*
problem link -> https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

7 3
2 6 4 3 6 8 3

output -> 20
*/

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    unordered_map<int,int> mp;

    int i=0, j=0;
    ll ans=0;
    while(j<n){
        mp[a[j]]++;
        while(mp.size()>k){
            mp[a[i]]--;
            if(mp[a[i]]==0){
                mp.erase(a[i]);
            }
            i++;
        }

        ans += (j-i+1);
        j++;
    }
    cout << ans << "\n";

}