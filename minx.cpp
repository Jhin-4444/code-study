#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
long long n,q;
cin>>n>>q;
vector<long long> a(n),b(q);
for(ll i =0;i<n;i++){
    cin>>a[i];//read
}
for(ll x=0;x<q ;x++){
    cin>> b[x];// read
}
sort(a.begin(),a.end());
long long temp=0,res=0;
for(ll i=0;i<n;i++){
    for(ll x=1;x<=q ;x++)
    {
        if(a[i]<=b[x-1])// need to debug
            cout<< a[i]<< "\n" ;// not debug
            if(a[i]>b[x-1]) cout<< -1<< "\n";// not debug
    }
}
    return 0;
    }
//we need to so sanh max tung phan tu trong a[i] vs tung phan tu trong b[x] ma neu eo co phan tu nao trong a deo thoa man trong b thi in ra la -1
