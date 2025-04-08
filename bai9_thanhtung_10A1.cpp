#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// Hàm chia các số chẵn và lẻ vào 2 mảng khác nhau
void hamphanchia(ll a[], ll b[], ll c[], ll n) {
    ll sd = 0, sdl = 0;  // sd cho số chẵn, sdl cho số lẻ
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[sd] = a[i];
            sd++;  // Tăng chỉ số cho mảng chứa số chẵn
        } else {
            c[sdl] = a[i];
            sdl++;  // Tăng chỉ số cho mảng chứa số lẻ
        }
    }

    // In ra kết quả
    for (int i = 0; i < sd; i++) {
        cout << b[i] << " ";
    }

    for (int i = 0; i < sdl; i++) {
        cout << c[i] << " ";
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu ";
    cin >> n;

    ll a[n], b[n], c[n];  // Các mảng để chứa mảng gốc, số chẵn và số lẻ

    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i + 1 << "]: ";
        cin >> a[i];  // Nhập các phần tử của mảng 'a'
    }

    hamphanchia(a, b, c, n);  // Gọi hàm để chia số chẵn và số lẻ

    return 0;
}
