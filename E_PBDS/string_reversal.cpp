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


int main()
{
    int n;
    string s;
    cin >> n >> s;
    
    string r = s;
    reverse(r.begin(), r.end());

    map<char,vector<int>> pos_s, pos_r;
    for(int i=0 ; i<n ; i++){
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<int> a(n);       //permutaiton
    for(char ch='a' ; ch<='z' ; ch++){
        for(int i=0 ; i<pos_s[ch].size() ; i++){
            a[pos_r[ch][i]] = pos_s[ch][i];
        }
    }


    pbds<int> p;
    ll ans = 0;
    for(int i=n-1 ; i>=0 ; i--){
        ans += p.order_of_key(a[i]);
        p.insert(a[i]);
    }
    cout << ans << "\n";


    
}


