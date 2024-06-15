#include<bits/stdc++.h>
using namespace std;

#define ll long long

const ll INF = 1e18;
const ll MOD = 1e9+7;

/*
problem link -> https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/description/

5 2
1 3 2 3 3

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

    int maxi = *max_element(a.begin(), a.end());

    int i=0, j=0;
    int countMax = 0;
    ll ans = 0;
    while(j<n){
        if(a[j]==maxi){
            countMax++;
        }
        while(countMax>=k){
            ans += n-j;
            if(a[i]==maxi){
                countMax--;
            }
            i++;
        }
        j++;
    }
    cout << ans << "\n";
}