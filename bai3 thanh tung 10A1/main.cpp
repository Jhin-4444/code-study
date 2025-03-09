#include <iostream>
//Bài 3. Lập trình tính giá trị biểu thức (n nhập từ bàn phím)

using namespace std;

int main()
{
    double z=0;
    int n;
    cout << "nhap n ";
    cin>>n ;
    if(n<=0)
        {cout << "khong thoa man gia tri n" << endl ;}

                for(int i=1 ;i <= n ;i++)
                {
                 z += i/ (i+1) ; // (double) i co the dung de ep chia thuc
                }
                cout << "gia tri bieu thuc la " << z <<endl;



    return 0;
}
