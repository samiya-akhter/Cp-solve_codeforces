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
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v.at(i);
  }

  set<int> s(all(v));
  
  if(s.size()==1){
    cout<<"Yes\n";
    return;
  }
  else if(s.size()>2){
  cout<<"No\n";
  return;
  }


  else{

    int a,b;
    a=count(all(v),*s.begin());
    b=count(all(v),*s.rbegin()) ;

    if(a==b||a-b==1||b-a==1){
      cout<<"Yes\n";
    }
    else cout<<"No\n";

    
  }

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