#include <iostream>
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b))  // 大きい方を返す

#define for_(i, a, b) for (int i = (a); i < (b); ++i)
#define rfor_(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define rep(i, n) for_(i, 0, n)
//  rep(i, 10)cout << i << endl;
// for 文を短くする
#define rrep(i, n) rfor_(i, 0, n)
// for を大きい方から実行する

typedef long long ll;

int L[10020][10020];
int Llist[100000];
int main() {
  int n, x;
  cin >> n >> x;

  rep(i, n) {
    int l;
    cin >> l;
    Llist[i] = l;
    rep(ii, l) {
      int a;
      cin >> a;
      L[i][ii] = a;
    }
  }
  int ans = 0;

  rep(h, n) {
    int hoge;
    rep(x, L[h].length) { cout << L[h][x] << endl; }
    rep(i, Llist[h] + 1) { int firlst = L[h][i]; }
  }
  cout << ans << endl;
  return 0;
}
