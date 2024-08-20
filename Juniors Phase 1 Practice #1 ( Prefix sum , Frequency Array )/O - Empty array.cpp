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
    map<int,int>m;
    while(n--){
        int x; cin >> x;
        m[x]++;
    }
    int found = 0;
    do{
        found = 0;
        for(auto i : m){
            if(i.second){
                found = 1;
                cout << i.first << " ";
                m[i.first]--;
            }
        }
        cout << endl;
    }while(found);
}