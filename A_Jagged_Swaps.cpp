#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {

  int n;
  cin>>n;
  vector<int> v;
  int x;
  int flag=0;
  for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    
  }
  if(v[0]==1){
    cout<<"YES\n";
    return;
  }

  if(v[0]!=1){
    cout<<"NO\n";
    return;
  }

  for(int i=1;i<n-1;i++){
    if(v[i-1]<v[i]&&v[i]>v[i+1]){
      swap(v[i],v[i+1]);
    }
  }

  if(is_sorted(all(v))){
   
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