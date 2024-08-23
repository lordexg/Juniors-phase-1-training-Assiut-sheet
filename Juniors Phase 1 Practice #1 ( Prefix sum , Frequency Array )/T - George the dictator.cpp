#include <bits/stdc++.h>
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

#define Im_cooked ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//vector<int> freq(1e5+10);

int32_t main() {
    Im_cooked
    // same logic as these problems (with respect to the other easier approaches ^^)
    /* 
        https://leetcode.com/problems/subarray-sum-equals-k/description/
        https://leetcode.com/problems/two-sum/description/
    */

    int n, k; cin >> n >> k;
    ll res = 0;
    map<int,int>m;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(m.count(k-x)){
            res += m[k-x];
        }
        m[x]++;
    }
    cout << res;
}
