#include <iostream>
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
int getSum(int n) { int sum = 0; 
while (n  > 0)
{
  sum += n % 10;
  n = n / 10;
}
return sum;
}

int main() {
  ll n;
  cin >> n;
  int ans = 500000;
  
  for_i(ia,0 , n){ 
    int ib = n - ia;
    if (ia+ib == n){
      int KuraiSumA = getSum(ia);
      int KuraiSumB = getSum(ib);
      if ((KuraiSumB + KuraiSumA) < ans) {
        ans = KuraiSumB + KuraiSumA;
      }

    }

  }
  rep(ia, n) {
  }

  cout << ans << endl;
  return 0;
}
