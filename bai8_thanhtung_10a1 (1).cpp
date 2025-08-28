#include <iostream>
using namespace std;

int main() {
    int n, x, pos;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    int a[n + 1]; // Mảng lớn hơn để chèn số mới

    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) { // Nhập bình thường
        cin >> a[i];
    }

    cout << "Nhap so can chen: ";
    cin >> x;
    cout << "Nhap vi tri chen (vi tri bat dau tu 1): ";
    cin >> pos;
    pos--; // Chuyển về vị trí đúng trong mảng

    // Kiểm tra vị trí hợp lệ
    if (pos < 0 || pos > n) {
        cout << "Vi tri chen khong hop le!";
        return 0;
    }

    // Dời phần tử sang phải để tạo khoảng trống
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x; // Chèn số mới
    n++; // Tăng số lượng phần tử

    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++) { // Xuất mảng bình thường
        cout << a[i] << " ";
    }

    return 0;
}