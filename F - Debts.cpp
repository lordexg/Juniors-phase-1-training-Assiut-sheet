#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<ll>v(n);
    for(ll &i : v) cin >> i;

    while(m--){
        int y,x,z; cin >> y >> x >> z;
        v[y-1] -= z, v[x-1] += z;
    }

    // for(ll i : v) cout << i << endl;
    for(ll i : v) if(i < 0) return cout << "NO",0;
    
    cout << "YES";
}