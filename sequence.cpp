#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("sequence.inp","r",stdin);
    freopen("sequence.out","w",stdout);
    int n,l,r;
    cin>>n>>l>>r;
    vector<long long>a(n+r,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int Max=-100000000;
    int s=0;
    for(int i=l;i<=r;i++){
        for(int j=0;j<n;j++){
            for(int t=0;t<=i;t++){
                s=s+a[j+t];
                if(s>=Max){
                    Max=s;
                    s=0;
                }
            }
            s=0;
        }
    }
    cout<<Max;
    return 0;
}
