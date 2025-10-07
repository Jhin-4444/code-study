#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #define file "maxtu"
    #ifdef file
    freopen("maxtu.inp", "r", stdin);
    freopen("maxtu.out", "w", stdout);
    #endif
    string s;
    getline(cin,s);
    int tmp = 0,asc=0;// tạo biến nhớ
    for(int i=0;i<s.size();i++)
    {
        if(i<s.size()&&s[i]!=' '&& s[i]!=',' && s[i]!= '.')
            {tmp++;}
        else if (tmp>asc)
        {
            asc=tmp;// cập nhật độ dài lớn nhất
        tmp=0;// reset độ dài từ mớ
        }
    }
    cout << asc << endl;
    return 0;
}
