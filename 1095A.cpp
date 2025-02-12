#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    int j=2;
    for(int i=0;i<n;){
        ans.push_back(s[i]);
        i = i+j;
        j++;
    }
    cout<<ans<<endl;
    return 0;
}