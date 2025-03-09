#include <iostream>

using namespace std;

int main()
{
    int n ,
        z=0;
    cout << "nhap so n(n <= 1000)" << endl;
    cin>> n;
    if(n <0 || n>1000);
    {cout<< "n khong thoa man dien kien n trg khoang 0 den 1000" << endl;
    return 0;}
//dung return o;  de lam cho no xac dinh ve lai tu dau k bj loi ngao
        while(n >0)
        {
            z += n%10;
            n /= 10;

        {cout << "gia tri cua n la " << n <<endl;}
        }

    return 0;
}
