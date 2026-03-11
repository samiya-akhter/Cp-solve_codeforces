#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

void solve() {
  int n1,n2;
  cin>>n1>>n2;
  string s1,s2;
  cin>>s1>>s2;
  int count=0;
  
  

  while(count<=6){
    if(s1.find(s2)!=string::npos){
      cout<<count<<endl;
      return;
    }
    

      s1+=s1;
      count++;
   
  }
    
  cout<<"-1\n";


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