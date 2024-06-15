#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*
time complexity: O(nlog(logn))
      
*/


int main()
{
    int n;
    cin >> n;
    vector<bool> prime(n+1, true);
    for(int i=2 ; i*i<=n ; i++){
        if(prime[i]){
            for(int j=2*i ; j<=n ; j+=i){
                prime[j] = false;
            }
        }
    }                            //all prime gula ber kore nilam

    vector<int> a;
    for(int i=2 ; i<=n ; i++){
        if(prime[i]){
            a.push_back(i);
        }
    }

    map<int,int> mp;
    int i=0;
    while(n>1){
        if(n%a[i] == 0){
            mp[a[i]]++;
            n /= a[i];
        }
        else{
            i++;
        }
    }

    for(auto i: mp){
        cout << i.first << " " << i.second << "\n";
    }

}

