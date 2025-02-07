#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans = ans || x;
    }
    if(ans==1)cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
    return 0;
}