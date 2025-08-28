#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; 
    cin >> N;
    int a[10000];
    for (int i = 0; i < N; i++)
     cin >> a[i];
    int posMax=0, posMin=0;
    for (int i = 0; i < N; i++) 
    {
        if (a[i] > a[posMax])
         posMax = i;
        if (a[i] < a[posMin]) 
         posMin = i;
    }
    swap(a[posMax], a[posMin]);
    for (int i = 0; i < N; i++)
     cout << a[i] << " ";
}