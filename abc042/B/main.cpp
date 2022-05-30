#include <algorithm>
#include <bits/stdc++.h>
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

int main() {
  int n, l;
  cin >> n >> l;
  // string s[120];
  vector<string> S;
  rep(i, n) {
    string hoge;
    cin >> hoge;
    S.push_back(hoge);
  }
  std::sort(S.begin(), S.end());

  rep(i, n) { cout << S[i]; }
  cout << endl;
  // cout << a << endl;
  // rrep(i, -100) { cout << i << endl; }
  return 0;
}
