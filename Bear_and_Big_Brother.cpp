#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(b>=a){
        a = 3*a;
        b = 2*b;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}