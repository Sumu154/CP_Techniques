#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


bool isPrime(ll n)
{
    if(n==1){
        return false;
    }
    for(int ll i=2 ; i*i<=n ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void Solve()
{
    ll n;
    cin >> n;
    if(isPrime(n)){
        cout << 1 << "\n";
    }
    else if(n%2 == 0){
        cout << 2 << "\n";
    }
    else{
        if(isPrime(n-2)){
            cout << 2 << "\n";
        }
        else{
            cout << 3 << "\n";
        }
    }

    
    
}

int main()
{
    Faster;
    
    Solve();
    
}

