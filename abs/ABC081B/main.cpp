#include <iostream>
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b)) // 大きい方を返す

#define for_(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor_(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define rep(i, n) for_(i, 0, n)
//  rep(i, 10)cout << i << endl;
// for 文を短くする
#define rrep(i, n) rfor_(i, 0, n)
// for を大きい方から実行する

typedef long long ll;

int main() {
  int n;
  int a[240];
  int ans = 0;
  cin >> n;
  rep(i, n) { cin >> a[i]; }
  while (true) {
    bool IsOdd = false;

    rep(i, n) {
      if (a[i] % 2 != 0) {
	IsOdd = true;
      }
    }
    if (IsOdd)
      break;

    rep(i, n) { a[i] /= 2; }
    ans += 1;
  }

  cout << ans << endl;
}
