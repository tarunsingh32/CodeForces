#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    int num;
    vector<int>v;
    while(ss>>num){
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    string ans;
    // for(auto it: v){
    //     cout<<it<<" ";
    // }
    for(int i=0;i<v.size()-1;i++){
        ans.push_back((v[i]+'0'));
        ans.push_back('+');
    }
    ans.push_back(v[v.size()-1]+'0');
    cout<<ans<<endl;
    return 0; 
}