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
        int tran=0;
        for(int i=0;i<s.length()-1;i++){
        

           if(s[i]!=s[i+1]){
                tran++;
            }

            if(s[i]=='1'&&s[i+1]=='0'){
                flag=1;
            }
           
            
        }
        if(tran==0){
            cout<<"1"<<endl;
        }

        else if(tran==1&&flag==1){
            cout<<"2"<<endl;}
        
        else  cout<<tran<<endl;
        
    }
    return 0;
}