#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin,s);
    int count=0;


    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z')
        arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]>0){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}
