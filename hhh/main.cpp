#include <iostream>

using namespace std;

int main()
{

    double a, b;
    cout << "nhap so a,b ";
    cin >> a >> b;
    if (a == 0)
     {
         if(b==0) cout << "phuong trinh vo so nghiem";
        else { cout << "phuong trinh vo nghiem"; }

     }
     else {double x = -b / a;
     cout << "phuong trinh co nghiem duy nhat x=" << x << endl; }
    return 0;
}
