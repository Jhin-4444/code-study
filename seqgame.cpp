#include<bits/stdc++.h>
using namespace std;
using ll =long long;
/*int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("seqgame.inp","r",stdin);
    //freopen("seqgame.out","w",stdout);
    int m,n;
    cin>> m>>n;
    vector<long long> a(m),b(n);
    for(ll i=0;i<m;i++){
        cin>> a[i];
    }
    for(ll j=0;j<n;j++){
        cin>> b[j];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),a.end());
    ll res=LONG_MAX;
    int i = 0, j = n - 1;
     while (i < m && j >= 0) {
        ll sum = a[i] + b[j];
        res = min(res, abs(sum));

        if (sum > 0)
            j--;
        else
            i++;
    }
    cout<< res<< "\n";
    return 0;
}*/
int main(){
ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    vector<ll> a(m), b(n);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;

    sort(b.begin(), b.end());

    ll res = LLONG_MAX;

    for (ll x : a) {
        // We want b[j] ≈ -x
        ll target = -x;
//abs(a[i]+b[i])= a
        // Find the closest element to target in b
        auto it = lower_bound(b.begin(), b.end(), target);

        if (it != b.end())
            res = min(res, abs(x + *it));
        if (it != b.begin()) {
            --it;
            res = min(res, abs(x + *it));
        }
    }

    cout << res << "\n";
return 0;
}
