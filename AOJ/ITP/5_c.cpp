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
void call(int n) {
  int i = 1;
CHECK_NUM:
  int x = i;
  if (x % 3 == 0) {
    cout << " " << i;
    goto END_CHECK_NUM;
  }
INCLUDE3:
  if (x % 10 == 3) {
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10;
  if (x)
    goto INCLUDE3;
END_CHECK_NUM:
  if (++i <= n)
    goto CHECK_NUM;

  cout << endl;
}

int main() {
  int n;
  cin >> n;
  call(n);
  return 0;
}
