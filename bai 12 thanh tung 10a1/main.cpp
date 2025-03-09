#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int ucln(int a, int b){
   while(b != 0){
      int r = a % b;
      a = b;
      b = r;
   }
   return a;
}

int main(){
   int a,b;
   std::cout << "nhap so m ";
   cin>> a;
   std:;cout << "nhap so b ";
   cin>> b;
   printf("UCLN cua %d va %d là: %d\n ", a,b, ucln(a,b));
   return 0;
}
