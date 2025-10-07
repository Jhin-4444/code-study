#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #define file "f"
    #ifdef file
    freopen("bai tho.inp", "r", stdin);
    freopen("bai tho.out", "w", stdout);
    #endif

    string s,x;
    int i=0;
    while(getline(cin ,s))
    {
       if(s.size()> i)
       {
           i =s.size();
           x=s;
       }
    }
    cout << x<< "\n" ;
}
