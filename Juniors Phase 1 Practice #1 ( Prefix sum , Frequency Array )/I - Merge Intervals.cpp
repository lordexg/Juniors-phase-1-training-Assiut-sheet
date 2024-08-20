#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#define ll long long
#define ld long double
#define pll  pair<ll,ll>;
#define pii pair<int,int>;
#define pb(x) push_back(x);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ini(arr) for(int &i : arr) cin >> i;
#define inl(arr) for(ll &i : arr) cin >> i;
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
    int n; cin >> n;
    vector<pair<ll,ll>>v(n);
    for(int i = 0; i < n; i++){
        int x,y; cin >> x >> y;
        v[i] = {x,y};
    }
    v.push_back({10e9+10,10e9+10});
    sort(all(v));

    ll s = v[0].first, e = v[0].second;
    for(int i = 1; i < v.size() ; i++){
        if(e<v[i].first){
            cout << s << " " << e << endl;
            s = v[i].first;
        }
        e = max(e,v[i].second);
    }
}