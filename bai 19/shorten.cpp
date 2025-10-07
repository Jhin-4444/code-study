#include <bits/stdc++.h>
using namespace std;
string int_to_string(int num) {
    if (num == 0) return "0";
    string res = "";
    while (num > 0) {
        res = char('0' + (num % 10)) + res;
        num /= 10;
    }
    return res;
}

int main()
{
    #define file "shorten"
    #ifdef file
    freopen("shorten.inp", "r", stdin);
    freopen("shorten.out", "w", stdout);
    #endif
    string s=" ";
    int n;
    while(cin >> n) {
        string s = "";

        // Tạo chuỗi
        for(int i = 1; i <= n; i++) {
            s += int_to_string(i);
        }

        // Nén: mô phỏng chính xác logic đánh dấu + xóa
        while(s.size() > 2) {
            string t = "";
            // Bước 1: Giữ vị trí LẺ (1,3,5...) + giữ vị trí 0
            t += s[0];  // Luôn giữ vị trí 0
            for(size_t i = 1; i < s.size(); i += 2) {
                t += s[i];
            }
            s = t;

            if(s.size() <= 2) break;

            // Bước 2: Giữ vị trí CHẴN của chuỗi mới, NHƯNG bỏ qua xóa vị trí 0
            t = s[0];  // Giữ vị trí 0
            for(size_t i = 2; i < s.size(); i += 2) {
                t += s[i];
            }
            s = t;
        }

        // Xóa ký tự đầu
        if(!s.empty()) {
            s.erase(0, 1);
        }

        cout << s << "\n";
    }
    return 0;
}
