
#include <iostream>
using namespace std;
#define max(a, b) ((a)>(b) ? (a) : (b)) // 大きい方を返す


#define for_(i, a, b) for(int i = (a);i <= (b);++i)
#define rfor_(i, a, b) for(int i = (b)-1;i >= (a);--i)
#define rep(i, n) for_(i, 0, n)
//  rep(i, 10)cout << i << endl;
// for 文を短くする
#define rrep(i, n) rfor_(i, 0, n)
// for を大きい方から実行する

typedef long long ll;

int main() {
  int ans= 0;
  int a,b,c;
  cin >> a >> b >> c;
  for_(i, a, b){
    int tmp = c% i;
    if(tmp == 0){
      ans = ans + 1;
    }
  }
  cout << ans << endl;
return 0;
}


