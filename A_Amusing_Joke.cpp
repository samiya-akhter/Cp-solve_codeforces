#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
 
  string s1,s2,s3;
  cin>>s1>>s2>>s3;

  string com=s1+s2;
  sort(all(com));
  sort(all(s3));


  if (com == s3) cout << "YES";
  else cout<<"NO";

}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}