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
  cin >> n;
  int d[120];
  rep(i, n) { cin >> d[i]; }

  int num[110] = {0}; // バケット
  for (int i = 0; i < n; ++i) {
    num[d[i]]++; // d[i] が 1 個増える
  }

  int res = 0; // 答えを格納
  for (int i = 1; i <= 100;
       ++i) {     // 1 <= d[i] <= 100 なので 1 から 100 まで探索
    if (num[i]) { // 0 より大きかったら
      ++res;
    }
  }
  cout << res << endl;

  return 0;
}
