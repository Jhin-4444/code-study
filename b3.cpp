#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, X;
    cin >> N >> X;
    int a[100000], pos = -1;
    for (int i = 1; i < N; i++) 
     cin >> a[i];
    for (int i = N-1; i >= 0; i--) 
     if (a[i] == X) 
         {
          pos = i+1; break; 
         }
    if (pos == -1) 
     cout << "Khong co"; 
    else cout << pos;
}