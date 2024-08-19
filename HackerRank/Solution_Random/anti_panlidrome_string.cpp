#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll inf = 1e18 + 1;
const ll mod = 1e9 + 7;

ll power(ll x, ll y, ll M = inf){
    ll ans = 1;
    x %= M;
    while(y){
        if(y&1)
            ans = (x * ans) % M;

        x = (x * x) % M;
        y >>= 1;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        if(n==1) cout<<m<<"\n";
        else if(n==2) cout<<(m*(m-1))%mod<<"\n";
        else{
            ll ans = (m*(m-1))%mod;
            ans *= power(m-2, n-2, mod);
            cout<<ans%mod<<"\n";
        }
    }
    return 0;
}