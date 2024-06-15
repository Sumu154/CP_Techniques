#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;

/*
problem link -> https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/description/

8 2
1 2 3 1 2 3 1 2

output -> 6
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

    int i=0, j=0, res=0;
    while(j<n){
        mp[a[j]]++;
        while(i<j and mp[a[j]]>k){
            mp[a[i]]--;
            i++;
        }
        res = max(res, j-i+1);
        j++;
    }
    cout << res << "\n";
}