#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[n], count = 0;

    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (isPrime(a[i])) {
            count++;
        }
    }

    cout << "So luong so nguyen to: " << count << endl;
    return 0;
}
