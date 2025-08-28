#include <bits/stdc++.h>
using namespace std;
int main()
 {
    int N;
    cin >> N;
    long long f[10000];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= N; i++)
     f[i] = f[i-1] + f[i-2];
    cout << f[N];
}