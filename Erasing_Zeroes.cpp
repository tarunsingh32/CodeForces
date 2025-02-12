#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int si =0, ei=0,cnt=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='1'){
                si = i;
                break;
            }
        }
        for(int i=str.length();i>=si;i--){
            if(str[i]=='1'){
                ei = i;
                break;
            }
        }
        for(int i=si;i<ei;i++){
            if(str[i]=='0'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}