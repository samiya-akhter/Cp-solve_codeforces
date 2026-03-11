#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {


  int n,k;
  cin>>n>>k;

  vector<int> v(n);

  for(int i=0;i<n;i++){
    cin>>v.at(i);
  }
  if(find(all(v),k)!=v.end()){
    cout<<"YES\n";
  }
  else cout<<"NO\n";
}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}