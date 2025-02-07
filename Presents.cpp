#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>x;
        mp[x]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<mp[i]<<" ";
    }
    // cout<<endl;
    return 0;
}