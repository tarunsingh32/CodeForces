#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char v[101][101];
        int cnt =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<n;i++){
            if(v[i][m-1]=='R'){
                cnt++;
                v[i][m-1]='D';
            }
        }
        for(int i=0;i<m;i++){
            if(v[n-1][i]=='D'){
                cnt++;
                v[n-1][i]='R';
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}