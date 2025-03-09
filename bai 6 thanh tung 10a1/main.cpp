#include <iostream>

using namespace std;

int main()
{
    int n;
    int h=0;
    cout << "nhap so nguyen n (n>0)" << endl;
    cin>> n;
    if (n<0)
    {
        cout <<("n khong thoa man dieu kien n>0 ");
    }

    for(int i=1;i<=n;i++)
         if(n%i==0)
            { h+=i;}
            cout << "So luong uoc cua " << n << " la: " << h << endl;

    return 0;
}
