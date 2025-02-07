#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    if(str[0]>='A' && str[0]<='Z') cout<<str<<endl;
    else if(str[0]>='a' && str[0]<='z'){
        str[0]=toupper(str[0]);
        cout<<str<<endl;
    }
    return 0;
}