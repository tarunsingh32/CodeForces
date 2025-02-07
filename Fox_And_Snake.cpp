#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    bool f = true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2==1) cout<<"#";
            else if((j==m && f) || (j==1 && !f)){
                 cout<<"#";
            }
            else cout<<".";
        }
        if(i%2==0) f=!f;
        cout<<endl;
    }
    return 0;
}