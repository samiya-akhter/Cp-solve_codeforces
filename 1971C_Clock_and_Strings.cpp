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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int flag=0;
        int arr[13]={0};
        arr[a]=1;
        arr[b]=1;
        arr[c]=2;
        arr[d]=2;
        int m,n;
        if(a>b){
            m=a;
            n=b;
        }
        else{
            m=b;
            n=a;
        }
        for(int i=n+1;i<m;i++){
            if(arr[i]==2){
                flag++;
                
            }
        }
      if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}
