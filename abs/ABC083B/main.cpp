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
int getSum(int num) {
  int anser = 0;
  while (num > 0) {
    anser += num % 10;
    num = num / 10;
  }
  return anser;
}
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  for (int i = 0; i <= n; i++) {
    int sum = getSum(i);
    // cout << "sum = " << sum << endl;
    if (a <= sum && sum <= b) {
      ans += i;
    }
  }

  cout << ans << endl;

  return 0;
}
