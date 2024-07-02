#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;


#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll INF = 1e18;
const ll MOD = 1e9+7;

const int N = 2e5+5;


int main()
{
    int  n, m;
    cin >> n >> m;
    pbds<ll> a;
    vector<ll> b(m); 
    for(int i=0 ; i<n ; i++){
        ll x;
        cin >> x;
        a.insert(x);
    } 
    for(int i=0 ; i<m ; i++){
        cin >> b[i];
        cout << a.order_of_key(b[i]+1) << " ";
    }cout << "\n";

}


