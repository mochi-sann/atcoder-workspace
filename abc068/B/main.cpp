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
int ans = 0;
int N;
int warukazu;

int main() {
  cin >> N;
  rep(i, N) {
    int nmu = i;
    int kaisuu = 0;
    while (true) {
      // 奇数になったら終了
      if (i % 2 != 0) {
	      break;
      };
      nmu = nmu / 2;
      kaisuu++;
    }
    if (kaisuu > warukazu) {
      warukazu = kaisuu;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
