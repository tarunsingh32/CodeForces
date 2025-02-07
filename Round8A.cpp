#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long cnt=0,sum=0;
        while(sum<=n){
            if(a>b){
                b+=a;
                sum=b;
                cnt++;
            }else{
                a+=b;
                sum=a;
                cnt++;
            }
            // if(sum>n)break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}