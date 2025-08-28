#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    if (N == 0) {
        cout << 0;
    } else {
        int tmp[100], k = 0;

        while (N > 0) {
            tmp[k++] = N % 2;
            N /= 2;           
        }
        for (int i = k-1; i >= 0; i--) 
         cout << tmp[i];
    }
    return 0;
}