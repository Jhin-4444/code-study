#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("cau1.inp","r",stdin);
    freopen("cau1.out","w",stdout);
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll sum=0;
    while(q--){
        ll l,r;
        cin>>l>>r;
        for(ll i=l;i<=r;i++){
            sum+=a[i];
        }
    cout<< sum<< "\n";
    }
return 0;
}
