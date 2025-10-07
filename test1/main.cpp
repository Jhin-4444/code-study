#include <iostream>

using namespace std;

int main()
{
    string s = "1";
while (s.length() > 1) {
    string temp = "";
    for (int i = 0; i < s.length(); ++i) {
        if (i % 2 == 1) temp += s[i];  // Giữ ký tự ở vị trí lẻ
    }
    s = temp;
}
cout << s << endl;

}
