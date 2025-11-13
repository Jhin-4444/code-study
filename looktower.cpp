#include <bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("LOOKTOWER.inp","r",stdin);
//    freopen("LOOKTOWER.out","w",stdout);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dem=0;
        int i=0;
        while(i<n-1){
            if(a[i]==a[i+1]){
                int c=i;
                int d=i;
                while(a[c]==a[c+1]&&c<n-1){
                    dem++;
                    c++;
                }
                for(int j=d;j<=c;j++){
                    b[j]=dem;
                    i++;
                    cout<<b[j]<<" ";
                }
            }
            dem=0;
            cout<<b[i]<<" ";
            i++;
        }
        cout<<b[n-1];
    }
    return 0;
}
