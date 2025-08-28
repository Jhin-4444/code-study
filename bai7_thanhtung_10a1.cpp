#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int a[n], b[n];
    cout << "Nhap " << n << " so nguyen: ";
    cin >> a[0]; 
    b[0] = a[0]; // Giá trị đầu tiên giữ nguyên

    for (int i = 1; i < n; i++) {
        cin >> a[i];
        b[i] = b[i - 1] + a[i]; // Tính tổng dồn
    }

    cout << "Mang tong don: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}