
#include <iostream>
#include <string>
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b)) // 大きい方を返す

#include <iomanip>
#include <stdio.h>

#define for_(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor_(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define rep(i, n) for_(i, 0, n)
//  rep(i, 10)cout << i << endl;
// for 文を短くする
#define rrep(i, n) rfor_(i, 0, n)
// for を大きい方から実行する

typedef long long ll;

int main() {
  ll min = 1000000, max = -1000000, sum = 0;
  int n;
  cin >> n;
  rep(i, n) {
    int a;
    cin >> a;
    if (min > a)
      min = a;
    if (max < a)
      max = a;
    sum += a;
  }
  cout << min << " " << max << " " << sum << endl;
  return 0;
}
