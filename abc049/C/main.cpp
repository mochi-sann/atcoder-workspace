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

string divide[4] = {"dream", "dreamer", "erase", "eraser"};
int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; ++i)
    reverse(divide[i].begin(), divide[i].end());

  bool can = true;
  for (int i = 0; i < S.size();) {
    bool can2 = false; // 4 個の文字列たちどれかで divide できるか
    for (int j = 0; j < 4; ++j) {
      string d = divide[j];
      if (S.substr(i, d.size()) == d) { // d で divide できるか
	can2 = true;
	i += d.size(); // divide できたら i を進める
      }
    }
    if (!can2) { // divide できなかったら
      can = false;
      break;
    }
  }

  if (can)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
