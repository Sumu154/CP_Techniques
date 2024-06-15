#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;


/*
problem link -> https://leetcode.com/problems/count-subarrays-with-fixed-bounds/

6 1 5
1 3 5 2 7 5

output -> 2
*/

int main()
{
    int n, minK, maxK;
    cin >> n >> minK >> maxK;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    ll ans = 0;

    int minPos = -1;
    int maxPos = -1;
    int leftBound = -1;

    for(int i=0 ; i<n ; i++){
        if(a[i]<minK or a[i]>maxK){
            leftBound = i;
        }

        if(a[i]==minK){
            minPos = i;
        }
        if(a[i]==maxK){
            maxPos = i;
        }

        int count = min(maxPos, minPos)-leftBound;
        if(count<=0){
            ans += 0;
        }
        else{
            ans += count;
        }
    }
    cout << ans << "\n";
}