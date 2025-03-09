#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int a[n];
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
