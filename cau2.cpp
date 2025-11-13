#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("cau2.inp","r",stdin);
    freopen("cau2.out","w",stdout);
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(ll t=0;t<n;t++) cin>>a[t];
    while(q--){
        ll x,y;
        ll cnt=0;
        cin>>x>>y;
        for(ll i=1;i<=n;i++){
            if (a[i] >= x && a[i] <= y) cnt++;
        }
        cout<< cnt<< "\n";
    }
return 0;
}
