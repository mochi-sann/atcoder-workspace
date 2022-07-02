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
  string s, t;
  cin >> s, t;
  vector<int> mozi(26, 0);
  vector<char> mo;
  for (int i = 0; i < s.size(); i++) {
    mozi.at(s.at(i) - 97)++;
  }
  for (int i = 0; i < 26; i++) {
    if (mozi.at(i) == 0) {
      char n = i + 97;
      cout << n << endl;
      return 0;
    }
  }
  cout << "None" << endl;

  rrep(i, -100) { cout << i << endl; }
  return 0;
}
