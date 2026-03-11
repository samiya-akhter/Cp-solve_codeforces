#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve(){
 
  int a,b,c;
  cin>>a>>b>>c;
   vector<int> v{a,b,c};
   sort(all(v));

   if(v.at(0)+v.at(1)==v.at(2)){
    cout<<"Yes\n";
   }
  else
  cout<<"No\n";


  



 }

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t =1 ;
  cin >> t;

  while (t--) {
    solve();
    
  }

    return 0;
}