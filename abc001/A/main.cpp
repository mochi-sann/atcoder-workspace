#include <algorithm>
#include <iostream>
#include <set>

using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b)) // 大きい方を返す

#define for_(i, a, b) for (int i = (a); i < (b); ++i)
#define for_i(i, a, b) for (int i = (a); i <= (b); ++i)
#define rfor_(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define rep(i, n) for_(i, 0, n)
//  rep(i, 10)cout << i << endl;
// for 文を短くする
#define rrep(i, n) rfor_(i, 0, n)
// for を大きい方から実行する

typedef long long ll;

int main() {
  int m;
  int out = 0;
  cin >> m;
  if (m < 100) {
    out = 0;
  } else if (m <= 5000) {
    out = m / 100;
  } else if (m >= 6000 || m < 30000) {
    out = m / 1000 + 50;
  } else if (m >= 35000 || m <= 70000) {
    out = (m / 1000 - 30) / 5 + 80;
  } else {
    out = 89;
  }
  cout << out / 10 << out % 10 << endl;
  return 0;
}
