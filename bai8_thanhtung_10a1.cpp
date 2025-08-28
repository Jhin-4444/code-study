#include <iostream>
using namespace std;

int main() {
    int n, x, pos;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int a[n + 1]; // Mảng lớn hơn để chèn số mới

    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Nhap so can chen: ";
    cin >> x;
    cout << "Nhap vi tri chen (0-based index): ";
    cin >> pos;

    // Dời các phần tử sang phải
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x; // Chèn số mới
    n++; // Tăng kích thước mảng

    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}