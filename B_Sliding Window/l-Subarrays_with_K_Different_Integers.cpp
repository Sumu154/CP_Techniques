#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;

/*
problem link -> https://leetcode.com/problems/subarrays-with-k-different-integers/description/

5 2
1 2 1 2 3

output -> 7
*/

 int SlidingWindow(vector<int> &a, int k) 
 {
    int n = a.size();
    unordered_map<int,int> mp;

    int i=0, j=0, count=0;
    while(j<n){
        mp[a[j]]++;
        while(mp.size()>k){
            mp[a[i]]--;
            if(mp[a[i]]==0){
                mp.erase(a[i]);
            }
            i++;
        }

        count += (j-i+1);
        j++;
    }

    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int ans = SlidingWindow(a, k)-SlidingWindow(a,k-1);
    cout << ans << "\n";
}