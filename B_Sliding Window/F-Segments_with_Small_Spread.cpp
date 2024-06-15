#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int i=0, j=0;
    ll sum=0, ans=0;
    multiset<ll> ms;
    while(i<n){
        ms.insert(a[i]);
        ll min, max;
        min = *ms.begin();
        max = *ms.rbegin();

        if(max-min <= k){
            ans += i-j+1;
        }
        else{
            while(j<i){
                min = *ms.begin();
                max = *ms.rbegin();
                if(max-min <= k){
                    break;
                }
                auto it = ms.find(a[j]);
                ms.erase(it);
                j++;
            }
            min = *ms.begin();
            max = *ms.rbegin();
            if(max-min <= k){
                ans += i-j+1;
            }
        }
        i++;
    }
    cout << ans << "\n";
}