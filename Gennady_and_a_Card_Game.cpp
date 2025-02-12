#include<bits/stdc++.h>
using namespace std;

int main(){
    string tb;
    cin>>tb;
    string hd;
    bool flag = false;
    for(int i=0;i<5;i++){
        cin>>hd;
        if(hd[0]==tb[0]){
            flag = true;
        }
        else if(hd[1]==tb[1]){
            flag = true;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}