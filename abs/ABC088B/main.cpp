#include <algorithm>
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
  int N;
  int a[110]; // 最大 100 個ですが余裕をもたせます
  cin >> N;
  for (int i = 0; i < N; ++i)
    cin >> a[i];

  std::sort(a, a + N, greater<int>()); // a[0:N] を大きい順にソート
  int Alice = 0;
  int Bob = 0;
  rep(i, N) {
    if (i % 2 == 0) {
      Alice += a[i];
    } else {
      Bob += a[i];
    };
  };

  cout << Alice - Bob << endl;
  return 0;
}
