#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int a,b;
        cin>>a>>b;
        int m=max(a,b);
        int n=min(a,b);
        cout <<n<<" "<<m<<endl;
    }
    return 0;
}
