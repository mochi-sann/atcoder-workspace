#include <iostream>
using namespace std;
#define max(a, b) ((a)>(b) ? (a) : (b)) // 大きい方を返す


#define for_(i, a, b) for(int i = (a);i < (b);++i)
#define rfor_(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) for_(i, 0, n)
//  rep(i, 10)cout << i << endl;
// for 文を短くする
#define rrep(i, n) rfor_(i, 0, n)
// for を大きい方から実行する

typedef long long ll;

int main() {
  int h , w;
  cin >> h >> w;
  int returnV = 0;
  rep(i, h * w) {
    int a;
    cin >> a;
    returnV = returnV + a;

    cout << returnV << endl;
  }




  cout << returnV << endl;
  return 0;
}
