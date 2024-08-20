#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#define ll long long
#define ld long double
#define pll  pair<ll,ll>;
#define pii pair<int,int>;
#define pb(x) push_back(x);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define inl(arr) for(ll &i : arr) cin >> i;
#define ini(arr) for(int &i : arr) cin >> i;
#define popcount(x) __builtin_popcountll(x)
#define print(arr) for(ll i : arr) cout << i << " "; cout<< endl;
ll MOD = 1e9+7;
using namespace std;
 
ll fact(int n){
    return (n==1 || n==0) ? 1: n * fact(n - 1);
}
#define Im_cooked ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//vector<int> freq(1e5+10);
 
int main() {
    Im_cooked
    int n, m; cin >> n >> m;
    vector<int>pfx(n); ini(pfx);
    set<int>s;
    for(int i = n-1; i >= 0;i--){
        s.insert(pfx[i]);
        pfx[i] = s.size();
    }
    while(m--){
        int x; cin >> x;
        cout << pfx[x-1] << endl;
    }
}

// another solution (mine)
// int main() {
//     Im_cooked //ms
//     int n, m; cin >> n >> m;
//     vector<int>v(n); ini(v);
//     vector<int>pfx(n+1);
//     map<int,int>map;
//     for(int i = n-1; i >= 0; i--){
//         if(!map.count(v[i])){
//             map[v[i]] = 0;
//             pfx[i] = pfx[i+1]+1;
//         }else{
//             pfx[i] = pfx[i+1];
//         }
//     }
 
//     while(m--){
//         int x; cin >> x;
//         cout << pfx[x-1] << endl;
//     }
// }