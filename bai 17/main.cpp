#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #define file "shorten"
    #ifdef file
    freopen("shorten.inp", "r", stdin);
    freopen("shorten.out", "w", stdout);
    #endif
    string s;
    getline(cin,s);
    bool inwords = false;
    int dem=0;
    for(char c : s)
    {
        if(c == '.'|| c== ','|| c== ' ')
            inwords=false;
        else if(!inwords)
        {
            dem++;
            inwords=true;
        }
    }
    cout << dem << endl;
    return 0;
}
