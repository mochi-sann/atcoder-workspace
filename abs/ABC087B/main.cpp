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
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int anser = 0;
  for (int ia = 0; ia <= A; ia++) {
for (int ib = 0; ib <= B; ib++) {
for (int ic = 0; ic <= C; ic++) {
       int total = (ia  * 500) + (ib * 100) + (ic * 50);
        if ( total == X) {
	        anser++;
        }
 
}
}
}

  cout << anser << endl;

}
