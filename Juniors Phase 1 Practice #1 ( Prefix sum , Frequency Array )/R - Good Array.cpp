#include <bits/stdc++.h>
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
    int n; cin >> n;
    ll sum = 0;
    // must save every element's position
    vector<pair<int,int>>v(n);
    for(int i = 0; i < n ;i++){
        int x; cin >> x;
        v[i].first = x;
        v[i].second = i+1;
        sum+= x;
    }

    sort(all(v));
    int fmx = v[n-1].first;
    int smx = v[n-2].first;
    vector<int>pos;
    
    sum -= fmx; // remove the maximum element from the sum

    // check for every element
    for(int i = 0; i < n-1;i++){
        if(sum-v[i].first == fmx){
            pos.push_back(v[i].second);
        }
    }

    // second max check (sum-smx == smx)
    if(sum == 2*smx){
        pos.push_back(v[n-1].second);
    }

    cout << pos.size() << endl;
    print(pos);
}