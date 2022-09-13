
#include <bits/stdc++.h>
using namespace std;
// run this cmd via terminal
//g++ -std=c++2a findmod.cpp && a.exe


void run_case() {
  int a, b;
  cin >> a >> b;
  if (a >= 0)
    cout << "Mod = " <<  a % b << "\n";
  else {
    // int x = b;
    // for (int i = 0; i < abs(a); ++i) {
    //   x--;
    //   if (x < 0) {
    //     x = b;
    //     i--;
    //   }
    // }
    // cout << "Mod = " << x << '\n';
    cout << "Mod = " << (((a % b) + b) % b) << "\n";
  }
}
int main() {
//   int t;
//   cin >> t;
//   while (t--) {
    run_case();
 // }
}
