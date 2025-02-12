#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.length();
        int res = ((str[0]-'0')-1)*10;
        if(n==1) res+=1;
        else if(n==2) res+=3;
        else if(n==3) res+=6;
        else res+=10;
        cout<<res<<endl;
    }
    return 0;
}