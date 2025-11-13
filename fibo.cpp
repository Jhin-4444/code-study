#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("FIBO.inp","r",stdin);
    freopen("FIBO.out","w",stdout);
    int n;
    cin>>n;
    vector<long long>a(40);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<40;i++){
        a[i]=a[i-1]+a[i-2];
    }
    while(n--){
        int m,t;
        long long s;
        cin>>m>>t>>s;
        if(a[m]+a[t]==s)cout<<"YES";
        else cout<<"No";
    }
    return 0;
}
