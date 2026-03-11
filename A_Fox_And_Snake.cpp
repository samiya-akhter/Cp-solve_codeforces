#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,c;
    cin>>r>>c;
    int flag=1;

    for(int i=1;i<=r;i++){
        if(i%2==0){

            if(flag%2==0){
                cout<<"#";
            {for(int j=1;j<c;j++){
                

                cout<<".";
            }
            
            cout<<endl;
            flag++;
        }
    }
            else{
            for(int j=0;j<c-1;j++){
                cout<<".";
            }
            cout<<"#";
            cout<<endl;
            flag++;
        }


        }
        else {
        
            for(int j=0;j<c;j++){

                cout<<"#";
            }
            cout<<endl;
        }

    }

    
    
    return 0;
}