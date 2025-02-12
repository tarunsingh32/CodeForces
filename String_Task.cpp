#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(auto &x: s){
        x = toupper(x);
    }
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')continue;
        else{
            str.push_back('.');
            str.push_back(_tolower(s[i]));
        }
    }
    cout<<str<<endl;
    return 0;
}