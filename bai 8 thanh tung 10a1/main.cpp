#include <iostream>
#include <iomanip>

using namespace std;
double En(double x, int n)
{
double ketqua=1.0;
double factorial=1.0;
for(int i=1;i<=n;i++)
{
 factorial *= x /i;
    ketqua += factorial;
}
return ketqua;
}
int main()
{
    double x;
    int n;
    cout << "nhap x ";
    cin >>x;
    cout << "nhap n ";
    cin >>n;
    double ketqua = En(x, n);
    cout<< setprecision(3)<< fixed << "gia tri cua e la " << ketqua << endl;
    return 0;
}
