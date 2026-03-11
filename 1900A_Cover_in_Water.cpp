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
  string s;
  cin>>s;
  
  int count=0;
  int action=0;
  vector<int>v;



  for(int i=0;i<n; i++ ){

    if(s[i]=='.'){
      count++;

    }
    if(s[i]=='#'){
      if(count>0)
      {v.push_back(count);}    
     count=0;
    }

  }
 if(count > 0) v.push_back(count);

      for(int x:v){
        if(x>=3){
          action=2;
          break;

        }
        else action+=x;
   

  }



  cout<<action<<endl;


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
