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
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
                flag=1;
                break;

            }


    }
    if(flag==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    
}

return 0;
}