#include <iostream>
using namespace std;

int sumarray(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i]; // cộng dồn từng phần tử
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Tong cac phan tu trong mang la: " << sumarray(arr, n);
    return 0;
}