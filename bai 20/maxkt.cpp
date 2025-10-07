#include <bits/stdc++.h>
using namespace std;
int mark[26];
int main()
{
    #define file "MAXKT"
    #ifdef file
    freopen("MAXKT.inp", "r", stdin);
    freopen("MAXKT.out", "w", stdout);
    #endif
    string s;
    getline(cin,s);
    for(int i=0;i<26;i++)
    {
        mark[i]=0;
    }
    // Đếm và đánh dấu
    for(char c : s) {
        if(c >= 'a' && c <= 'z') {
            int demk = c - 'a';
            if(mark[demk] == 0) {
                mark[demk] = 1;  // Lần đầu xuất hiện
            } else {
                mark[demk]++;    // Tăng tần suất
            }
        }
    }
    // Số loại ký tự khác nhau
    int dem = 0;
    for(int i = 0; i < 26; i++) {
        if(mark[i] > 0) {  // Ký tự đã xuất hiện
            dem++;
        }
    }
    // Tìm ký tự xuất hiện nhiều nhất
    int maxdem = 0;
    char maxchu = 'a';
    for(int i = 0; i < 26; i++) {
        if(mark[i] > maxdem) {
            maxdem = mark[i];
            maxchu = 'a' + i;
        }
    }
    cout << dem << endl;
    cout << maxchu << " " << maxdem << endl;
    return 0;
}
