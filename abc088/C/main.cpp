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
  int N, Y;
  cin >> N >> Y;
  // 10000円札
  int re10000 = -1, re5000 = -1, re1000 = -1;
  for_(a, 0, N) {
    // 5000円札
    for_(b, 0, N) {
      // 1000円札
      int c = N - a - b;
      int total = a * 10000 + b * 5000 + c * 1000;
      if (total == Y && a + b + c == N) {
	re10000 = a;
	re5000 = b;
	re1000 = c;
      }
    }
  }
  cout << re10000 << " " << re5000 << " " >> re1000 >> endl;
  return 0;
}
