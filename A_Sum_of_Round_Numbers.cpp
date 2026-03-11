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
        int n;
        cin>>n;
        vector<int> v;
        int temp=1;
        int rem=0;
        int count=0;
        while(n>0){
            rem=n%10;
           
            
            
            if(rem!=0){
                count++; 
                v.push_back(temp*rem);
            }
            temp*=10;
            n/=10;

        }
        cout<<count<<endl;
        for(int x: v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}