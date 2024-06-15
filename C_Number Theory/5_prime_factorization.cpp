#include<bits/stdc++.h>
using namespace std;

/*
n ke primer product hishabe likhbo
1 chara shb number kei possible

time complexity: 
      
*/

int main()
{
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=2 ; i*i<=n ; i++){
        while(n%i == 0){
            mp[i]++;
            n /= i;
        }
    }
    if(n>1){
        mp[n]++;
    }

    for(auto i: mp){
        cout << i.first << " " << i.second << "\n";
    }
}

