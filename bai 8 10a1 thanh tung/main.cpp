#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // Nhập tọa độ tâm và bán kính của đường tròn
    double x0, y0, r;
    cout << "Nhap toa do tam cua duong tron (x0, y0): ";
    cin >> x0 >> y0;
    cout << "Nhap ban kinh r: ";
    cin >> r;

    // Nhập tọa độ điểm A
    double x, y;
    cout << "Nhap toa do diem A (x, y): ";
    cin >> x >> y;

    // Tính khoảng cách từ điểm A đến tâm
    double d = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

    //  điểm A
    if (d <= r) {
        cout << "Diem A nam trong hoac tren duong tron." << endl;
    } else {
        cout << "Diem A nam ngoai duong tron." << endl;
    }

    return 0;
}

