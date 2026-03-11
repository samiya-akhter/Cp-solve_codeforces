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

        int d,k,q;
        cin>>d>>k>>q;
        int point[k];
        for(int i=0;i<k;i++){
            cin>>point[i];
        }
        int time[k];
        for(int i=0;i<k;i++){
            cin>>time[i];
        }

        int query[q];
        for(int i=0;i<q;i++){
            cin>>query[i];
        }

        int answer[q]={0};

        for(int i=0;i<k;i++){
            int speed=point[i]/time[i];
            for(int j=0;j<q;j++){
                if(query[j]>point[i]){
                answer[j]+=(speed*(query[j]-point[i]));

                }
            }
         }

         for(int i=0;i<q;i++){
             cout<<answer[i]<<" ";
    }
       

cout<<endl;
}

    
    return 0;
}
    
