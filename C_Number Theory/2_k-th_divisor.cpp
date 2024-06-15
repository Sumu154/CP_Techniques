#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*
50 4

10

*/

int main()
{
    
    ll n, k;
    cin >> n >> k;
    vector<ll> ans;
    for(ll i=1 ; i*i<=n ; i++){
        if(n%i == 0){
            ans.push_back(i);
            if(n/i != i){
                ans.push_back(n/i);
            }
        }
    }

    sort(ans.begin(), ans.end());
    if(ans.size() < k){
        cout << -1 << "\n";
    }
    else{
        cout << ans[k-1] << "\n";
    }
    
}

