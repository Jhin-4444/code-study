#include <iostream>

using namespace std;

int main()
{
    int tuoiCha, tuoiCon;

    // Nhập dữ liệu
    cout << "Nhap tuoi cha: ";
    cin >> tuoiCha;
    cout << "Nhap tuoi con: ";
    cin >> tuoiCon;

    // Kiểm tra điều kiện đầu vào
    if (tuoiCha <= 2 * tuoiCon || tuoiCha < 25) {
        cout << "Du lieu khong hop le!\n";
    } else {
        // Sử dụng vòng lặp để tìm số năm cần chờ
        int x = 0;
        while (tuoiCha != 2 * tuoiCon) { // Lặp đến khi tuổi cha gấp đôi tuổi con
            tuoiCha++;
            tuoiCon++;
            x++;
        }

        cout << "Sau " << x << " nam, tuoi cha se gap doi tuoi con.\n";
    }

    return 0;
}
