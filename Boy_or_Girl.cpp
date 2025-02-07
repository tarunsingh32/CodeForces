#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    vector<int>hash(26,0);
    int cnt=0;
    for(auto &it:str){
        hash[it-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash[i]!=0)cnt++;
    }
    // for(auto &it: hash){
    //     cout<<it<<" ";
    // }
    // cout<<cnt<<endl;
    if(cnt%2)cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}