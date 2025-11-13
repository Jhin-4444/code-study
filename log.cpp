#include <bits/stdc++.h>

using namespace std;
long long cs(string c){
    int s=0;
    if(c[0]=='-'){
        while(c.size()>1){
            s=s*10+c[1]-48;
            c.erase(1,1);
        }
        s=-s;
    }
    else {
        while(c.size()>0){
            s=s*10+c[0]-48;
            c.erase(0,1);
        }
    }
    return s;
}
int main()
{
    freopen("log.inp","r",stdin);
    freopen("log.out","w",stdout);
    int n;
    long long s;
    cin>>n;
    vector<long long>a(n);
    string b;
    string tg="";
    getline(cin,b);
    cin>>s;
    int i=0;
    while(i<b.size()){
        if(b[i]=='-')tg=tg+'-';
        while(b[i]>='0'&&b[i]<='9'){
            tg=tg+b[i];
            i++;
            if(b[i]<='0'||b[i]>='9')tg=tg+" ";
        }
        i++;
    }
    int bd=0;
    for(int j=0;j<tg.size();j++){
        if(tg[j]==' '){
            a.push_back(cs(tg.substr(bd,j-bd)));
            bd=j+1;
        }
    }
    int dem=0;
    for(int j=0;j<n;j++){
        for(int t=j;t<n;t++){
            if(a[j]+a[t]==s)dem++;
        }
    }
    cout<<dem;
    return 0;
}
