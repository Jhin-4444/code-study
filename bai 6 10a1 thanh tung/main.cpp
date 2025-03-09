#include <iostream>

using namespace std;

int main()
{
    int m , n;

    cout << "Nhap so keo" << endl;
    cin >> m;

        cout << "Nhap so em be" << endl;
        cin >> n;
        if (m % n == 0)
            {cout << "chia deu cho tat ca em be" << endl; }
        else { cout << " ko chia cho deu dc" << endl; }
           //dung phep % ==0 hop ly
    return 0;
}
