#include <iostream>
#include<cmath>//ham factorial vs hàm pow

using namespace std;

double tong_s1(double x, int n)
{
    double s1=1.0;
    for(int i=1;i<=n;++i){
        s1+= pow(x,i) /(i+1);
    }
    return s1;
}

double tong_s2(double x, int n)
{
double s2=1.0;
double factorial=1.0;
for(int i=1;i<=n;++i)
{
 factorial *= i;
    s2 += pow(x,i) / factorial;
}
return s2;
}
int main()

{
    double x;
    int n;
    cout << "nhap x ";
    cin >>x;
    cout << "nhap n ";
    cin >>n;
    double s1= tong_s1(x, n);
    double s2= tong_s2(x, n);
    cout << "s1 la "<< s1 << endl;
    cout << "s2 la "<< s2 << endl;
    return 0;
}
