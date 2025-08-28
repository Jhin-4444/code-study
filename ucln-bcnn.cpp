#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b; // chia lấy dư
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int m, n;
    cin >> m >> n;
    int ucln = gcd(m, n);
    int bcnn = m / ucln * n;
    cout << "UCLN = " << ucln << ", BCNN = " << bcnn;
    return 0;
}