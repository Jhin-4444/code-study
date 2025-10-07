#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    while (s[0] == ' ')
        s.erase(0, 1);
    while (s[s.size() - 1] == ' ')
        s.erase(s.size() - 1, 1);
    for (int i = 0; i < s.size() - 1;) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i, 1);
        } else {
            i++;
        }
    }
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 32;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }

        if (s[i - 1] != ' ' && s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    cout << s << endl;
    return 0;
}
