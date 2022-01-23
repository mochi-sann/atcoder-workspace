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
  string S;
  ll a,b;
  cin >> S >> a >> b;
  

  char SA = S[a];
  char SB = S[b];

  for_(l, 0, S.size()+ 1){
    if(l == a) {
      cout << "SB "<<SB;
    } else if(l == b ) {
      cout << "SA "<<SA;
    } else {
      cout << S[l];
    }

  }

  return 0;
}
