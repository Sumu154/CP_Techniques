#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;


#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;



void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    int pos = k/2;
    if(k%2==0){
        pos--;
    }

    int i=0,j=0;
    pbds<pair<ll,int>> p;
    while(i<n){
        p.insert({a[i],i});
        if(i-j+1 == k){
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({a[j],j});
            j++;
        }
        i++;
    }
    
}

int main()
{
    Faster;
    
    Solve();
    
}


