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

  int K;
  cin >> K;
  int ab = 0;
  int aa = K % 60;

  if (K - 60 >= 0) {
    aa = K - 60;
    ab = 1;
  };
  if (aa < 10) {
    cout << 21 + ab << ":"
         << "0" << aa << endl;
  } else {
    cout << 21 + ab << ":" << aa << endl;
  }
  return 0;
}
